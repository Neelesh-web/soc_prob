#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector <ll> a(n);
    vector<ll> b(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n;i++){
        cin >> b[i];
    }
    vector<ll> c(n);
    for(ll i=0;i<n;i++ ){
        c[i] = a[i] - b[i];
    }
    vector<ll>result;
    ll maxi = c[0];
    for(ll i= 1;i<n;i++){
        if(c[i] >= maxi){
            maxi = c[i];
        }
    }
    for(ll i=0;i<n;i++){
        if(c[i] == maxi ){
            result.push_back(i+1);
        }
    }
    cout << result.size() << endl;
    for(auto x : result){
        cout << x << " " ;
    }
    cout << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}