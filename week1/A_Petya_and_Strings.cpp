#include <iostream>
#include <string>
using namespace std;
int checkstr(string str1 , string str2){
    for(char& c : str1){
        c = tolower(c);
    }
    for(char& c : str2){
        c = tolower(c);
    }
    return  str1.compare(str2);
}
int main(){
    string string1,string2 ;
    cin >> string1 >> string2 ;
    cout << checkstr(string1,string2);
}