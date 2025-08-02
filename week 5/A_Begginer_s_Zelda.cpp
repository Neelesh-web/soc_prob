#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> freq(n+1);
    for(int i=0;i< n -1;i++){
        int a , b ;
        cin >> a >> b;
        freq[a]++;
        freq[b]++;
    }
    int leaves=0;
    for(int i=0;i<=n;i++){
        if(freq[i] == 1) leaves++;
    }
    if(leaves % 2 == 0) {
        cout << leaves/2 << endl;
    }
    else {
        cout << leaves/2 + 1 << endl;
 
    }
    return;
}
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}