#include <iostream>
using namespace std;
int main(){
    int input ;
    int result;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin >> input ;
            if(input == 1 ){
                result = abs(j-3)+abs(i-3);
            }
 
        }
    }
    cout << result;
}