
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cards(n, vector<int>(m));
 
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> cards[i][j];
 
    ll total = 0;
 
    for (int col = 0; col < m; col++) {
        vector<int> columns(n);
        for (int row = 0; row < n; row++)
            columns[row] = cards[row][col];
 
        sort(columns.begin(), columns.end());
 
        ll prefixSum = 0;
        for (int i = 0; i < n; i++) {
            total +=  (ll)(columns[i]) * i - prefixSum;
            prefixSum += columns[i];
        }
    }
 
    cout << total << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}
