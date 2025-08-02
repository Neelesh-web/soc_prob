#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll get_diff(ll n){
    ll maxi =0 , mini =9;
    while(1){
        maxi = max( n %10 , maxi);
        mini = min( n%10 ,mini);
        if( n >=0 && n <=9) break;
        n = n/10;

        }
        return maxi - mini;
}
void solve(){
    ll l , r;
    cin >> l >> r;
    ll sample =0, num=l ;
    for(ll i=l;i<=min(r , l+100);i++){
        if(sample < get_diff(i)){
            sample = get_diff(i);
            num =i;
        }
        if(sample == 9) break;
    }
    cout << num << endl;
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