#include <iostream>
#include <stack>
#include <string>
using namespace std ;
string reverse(string str){
    stack<char> s;
    for(char c : str){
        s.push(c);
           }
        string final = "";
        while(!s.empty()){
            final = final + s.top();
            s.pop();
        }
        return final;
}
int main(){
    string s ,t;
    cin >> s >> t;
   if(reverse(s) == t) cout << "YES";
   else cout << "NO";
    
}