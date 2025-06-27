#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int i=0;
    string low ="";
    while(i<n-1){
        if(s2[i] < s1[i+1]){
            break;

        }
        else i++;
    }
    for(int j=0;j<=n-1;j++){
        if(j < i){
            low += s1[j];
            
        }
        else if (j==i){
            low += s1[i];
            low += s2[i];
        }
        else {
            low += s2[j];
        }

    }
    int count =1;
    int a =0,b=1;
    while(a<n&&b<=2){
        if(b==2){
            break;
        }
        if(a == n-1){
            b=2;
            break;
        }
        if(b==1&&a<n-1){
            if(s1[a+1]>s2[a]){
                b=2;
                break;
            }
            else if(s1[a+1]<s2[a]){
                a++;
                count = 1;
            }
            else {
                count++;
                a++;
            }
        }

    }
    cout << low << "\n";
    cout << count << "\n";
    return;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;}
