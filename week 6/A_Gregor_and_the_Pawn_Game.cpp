#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
 
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s2[i] == '1') {
            if (i > 0 && s1[i-1] == '1') {
                count++;
                s1[i-1] = '0'; 
            } else if (s1[i] == '0') {
                count++; 
            } else if (i < n - 1 && s1[i+1] == '1') {
                count++;
                s1[i+1] = '0';
            }
        }
    }
 
    cout << count << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}