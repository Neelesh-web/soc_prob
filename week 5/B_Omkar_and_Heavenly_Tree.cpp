#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , m ;
    cin >> n >> m ;
    vector<int>check(n+1,false);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        check[b] = true;
    }
    int center = -1;
    for(int i=1;i<=n;i++){
        if(!check[i]){
            center = i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(i != center){
            cout << center << " " << i << endl;
        }
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}