#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<ll> bad(n + 1, 0);
    for (int i = 3; i <= n; i++) {
        if (a[i-2] >= a[i-1] && a[i-1] >= a[i]) {
            bad[i] = 1;
        }
    }
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + bad[i];
    }
    while (q--) {
        ll l, r;
        cin >> l >> r;
        ll total = r - l + 1;
        if (r - l + 1 < 3) {
            cout << total << "\n";
        } else {
            ll badCount = pref[r] - pref[l + 1];
            cout << (total - badCount) << "\n";
        }
    }
 
    return 0;
}