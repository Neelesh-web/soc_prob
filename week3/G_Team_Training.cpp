#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    ll result = 0;
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] >= x){
            result ++;
        }
    }
    sort(arr.begin(), arr.end());
    ll index = lower_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;
    ll i=index-1;
    ll counter =2;
    while(i >= 0 ){
        if(arr[i] * counter < x){
            counter ++;
            i--;
        }
        else{
            result ++;
            i = i -2;
            counter = 2;
        }
    }
    cout << result << endl;
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