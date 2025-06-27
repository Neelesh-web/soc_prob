#include <iostream>
#include <string>
using namespace std;
bool check(string str){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(str[i] == str[j]) return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    string temp;
    for(int i=n+1;i<9999;i++){
       temp = to_string(i);
        if(check(temp)) {cout << temp; break;}
    }
}