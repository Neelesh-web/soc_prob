#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n %2 == 1){
        cout << "YES" << endl;
    }
    else{
        for(int i=1; i<n-1 ; i++){
            a[i+1] = a[i+1]-(a[i] - a[i-1]);
            a[i] = a[i-1];
        }
        if(a[n-1] >= a[n-2]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}