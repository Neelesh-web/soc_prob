#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n, k;
    cin >> n >> k;
    
    ll y = n / k;
    for (ll i = 0; i <= 1; ++i) {
        ll temp = y - i;
        if (temp < 0) continue;
        ll rem = n - k * temp;
        if (rem % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}