#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,m;
    cin >> n >> m;
    ll time =0;
    while(n > 0 && m > 0){
       if(n == 1 && m == 1){
           break;
       }
       if(n > m ){
         n-= 2;
        m += 1;
       }
       else{
            m -= 2;
            n += 1;
       }
       time++;
    }
    cout << time << endl;
  
}