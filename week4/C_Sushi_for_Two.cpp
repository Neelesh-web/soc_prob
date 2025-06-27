#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;   
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<ll> rep;
    ll s = 1;
    for (ll i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            s++;
        } else {
            rep.push_back(s);
            s = 1;
        }
    }
    rep.push_back(s); 

    ll maxi = 0;
    for (ll i = 0; i + 1 < rep.size(); i++) {
        maxi = max(maxi, 2 * min(rep[i], rep[i + 1]));
    }

    cout << maxi << '\n';
}
