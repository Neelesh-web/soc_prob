#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int count =0 ;
    int a ,b;
    for (int i=0;i<n;i++){
        cin >> a >> b;
        if(b-a >1) count++ ;
    }
    cout << count;
}