#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve(){
    ll n;
    cin >> n;
    ll part = sqrtl(n);
    if(part == sqrtl(n)){
        cout << 0 << " " << part << endl;
        return;
    }
    else cout << -1 << endl;

}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}