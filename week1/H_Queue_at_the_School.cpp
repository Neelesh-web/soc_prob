#include <iostream>
#include <string>
using namespace std;
int main(){
    int n ,t;
    cin >> n >> t;
    string q;
    cin >> q;
    for(int i =0;i<t;i++){
        for(int j=0;j<n-1;j++){
            if(q[j] == 'B' && q[j+1] == 'G'){
                swap(q[j],q[j+1]);
                j++;
            }
            
        }
    }
    cout << q;
 
 
}