#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll a , b , c, d;
    cin >> a >> b >> c >> d;
    if(d < b){
        cout << -1 << endl;
        return;
    }
    ll result  = d-b;
    a += d-b;
    b=d;
    //cout << a << " " << b << endl;
    if(a < c){
        cout << -1 << endl;
        return;
    }
    else {
        result += a-c;
    }
    cout << result << endl;
    
 
 
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
