#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string result = "";
    for(ll i=0 ;i < n; i++){
        if(result.empty() && s[i] == '1') {
            result += s[i];
            continue;
        }
        if ( !result.empty() && s[i] != s[i - 1]) {
            result += s[i];
        }
    }
    if( (ll)result.length() == 0){
        cout << 0 << endl;
        return;
    }
    cout << (ll)result.length() -1 << endl;


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