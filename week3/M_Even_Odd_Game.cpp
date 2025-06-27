#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<ll>());  // sort descending

    ll alice = 0, bob = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {  // Alice's turn
            if(arr[i] % 2 == 0)
                alice += arr[i];
        } else {          // Bob's turn
            if(arr[i] % 2 == 1)
                bob += arr[i];
        }
    }

    if(alice > bob)
        cout << "Alice" << endl;
    else if(bob > alice)
        cout << "Bob" << endl;
    else
        cout << "Tie" << endl;
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
