#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char before ='0';
    int before_index ;
    for(int i=0;i<n;i++){
        if(s[i] != '?'){
            before = s[i];
            before_index = i;
            break;
        }
    }
    if(before == '0'){
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                s[i] = 'R';
            }
            else{
                s[i] = 'B';
            }
        }
        cout << s << endl;
        return;
    }
    char before_comp = before == 'R' ? 'B' : 'R';
    for(int i = before_index -1 ; i >=0;i--){
        if(before_index % 2 == i %2 ){
            s[i] = before;
        }
        else{
            s[i] = before_comp;
        }
    }
    for(int i = before_index +1 ; i < n;i++){
        if(s[i] == '?'){
            if(before_index % 2 == i%2 ){
                s[i] = before;
            }
            else{
                s[i] = before_comp;
            }
        }
        else{
            before = s[i];
            before_comp = before == 'R' ? 'B' : 'R';
            before_index = i;
        }
    }
    cout << s << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}