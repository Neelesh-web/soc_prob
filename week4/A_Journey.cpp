#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
         ll n,a,b,c;
        cin >> n >> a >> b >> c;
        ll ans = (n / (a + b+ c));
        n %= (a+b+c);
        ans *= 3;
        if(n == 0){
            cout << ans << endl;
            return;
        }
        else if( n - a <= 0 ){
            cout << ans+1 << endl;
            return;
        }
        else if(n - a - b <=0){
            cout << ans + 2 << endl;
            return;
        }
        else {
            cout << ans + 3 << endl;
            return;
        }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
    solve();
}
}