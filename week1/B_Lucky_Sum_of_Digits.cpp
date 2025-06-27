#include <iostream>
#include <string>
using namespace std ; 
void lucky(int n){
    int x=0,y=0,z=n;
    while(z >= 0){
        if(z % 4 == 0){
            x = (n-7*y)/4 ;
        }
         y++;
         z = z -7;
    }
    if((n-4*x)%7 == 0){
    y = (n-4*x) / 7 ;
    for(int i = 0;i<x;i++){
        cout << '4';
    }
    for(int i=0;i<y;i++){
        cout << '7';
    }
}
else cout << -1 ; 
    return;
}
 
int main(){
    int a ;
    cin >> a;
     lucky(a);
 
}