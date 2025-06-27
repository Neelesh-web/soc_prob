#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool good(ll n, ll k) {
    return n - (ll)(sqrtl(n)) >= k;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> k;

        ll lo = k + 1, hi = k + 2 * (ll)(sqrtl(k)) + 100, ans = -1;

        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (mid - (ll)(sqrtl(mid)) >= k) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << ans << "\n";
    }
}
