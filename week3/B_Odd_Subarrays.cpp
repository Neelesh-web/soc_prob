#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = 0;
    int base = 0;
    while(base < n-1){
        if(arr[base] > arr[base +1]){
            result ++;
            base += 2;
        }
        else base ++;
    }
    cout << result << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}