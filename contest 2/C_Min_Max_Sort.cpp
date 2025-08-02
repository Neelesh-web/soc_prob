#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> pos(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            pos[v[i]] = i;
        }
        int ans = 0;
        int l = 0, r = n - 1;
        int x = 1, y = n;
        int good = 0;
        int extra = 0;
        vector<bool> check(n, false);
        while (l <= r) {
            if (v[l] != x || v[r] != y) {
                ans++;
                extra = good;
            } else {
                good++;
            }
            check[pos[x]] = true;
            check[pos[y]] = true;
            x++;
            y--;
            while (l <= r && check[l]) {
                l++;
            }
            while (l <= r && check[r]) {
                r--;
            }
        }
        cout << ans + extra << endl;
    }
    return 0;
}