#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int n;
    cin >> n;
    vector<vector<ll>> treechild(n+1);
    for(ll i=2 ; i <= n;i++){
        ll sample;
        cin >> sample;
        treechild[sample].push_back(i);
    }
    for(ll i =1;i<=n;i++){
        if(!treechild[i].empty()){
            ll leafchild =0;
            for(auto child : treechild[i]){
                if(treechild[child].empty()){
                    leafchild++;
                }
            }
            if(leafchild < 3){
                cout << "NO" ;
                return 0;
            }
        }
    }
    cout << "YES";
}