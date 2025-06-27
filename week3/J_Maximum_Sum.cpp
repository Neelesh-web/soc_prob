#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

void solve() {
    ll n, operations;
    cin >> n >> operations;
    vector<ll> arr(n);
    ll original_sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        original_sum += arr[i]; 
    }

    ll sum = 0, best = LLONG_MIN;
    for (ll i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    best = max(0LL, best); 

    for (ll i = 0; i < operations; i++) {
        original_sum += best;
        best *= 2;
        original_sum = (original_sum % mod + mod) % mod;
        best = (best % mod + mod) % mod;
    }

    cout << (original_sum % mod + mod) % mod << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
