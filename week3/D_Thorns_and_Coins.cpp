#include <bits/stdc++.h>
using namespace std;
//using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int stop_index = n;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == '*' && s[i] == '*') {
            stop_index = i - 1;
            break;
        }
    }

    int result = 0;
    for (int i = 0; i <= stop_index; i++) {
        if (s[i] == '@') result++;
    }

    cout << result << '\n';
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
