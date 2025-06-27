#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    double a , b , c;
    cin >> a >> b >> c;
    ll result = (a*c/b) - c;
    if( result == (a*c/b) -c){
        cout << result;
    }
    else cout << result +1 ;
    return 0;
    
}