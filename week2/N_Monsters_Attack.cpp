#include <bits/stdc++.h>
using namespace std;
using  ll = long long;
void solve(){
    ll n, power;
    cin >> n >> power;
    vector<ll> strength(n),x(n);
    for(auto &i :strength) {
        cin >> i;
    }
    vector<ll>final_str(n+1,0);
    for(ll i=0;i<n;i++){
        cin >> x[i];
        final_str[abs(x[i])] += strength[i];
    }
    ll cur_pow = power;
    for(ll i=1;i<=n;i++){
        if(cur_pow <final_str[i]){
            cout << "NO" << endl;
            return;
        }
        cur_pow -= final_str[i];
        cur_pow += power;
    }
    cout << "YES" << endl;


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}