#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
 
    vector<int> a(n);
    vector<int> pos(51, -1); 
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (pos[a[i]] == -1) {
            pos[a[i]] = i + 1; 
        }
    }
 
    while (q--) {
        int t;
        cin >> t;
 
        int ans = pos[t];
        cout << ans << " ";
        for (int i = 1; i <= 50; ++i) {
            if (i == t) continue;
            if (pos[i] < ans) pos[i]++;
        }
        pos[t] = 1;
    }
 
    cout << '\n';
    return 0;
}