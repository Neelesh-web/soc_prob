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
    sort(arr.begin(), arr.end());
    if(arr[0] != 1) {
        cout << "NO" << endl;
        return;
    };
    ll sum = 1;
    bool check = true;
    for(int i=1;i<n;i++){
        if(arr[i] > sum ){
            check = false;
            break;
        } else {
            sum += arr[i];
        }
    }
    if(check) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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