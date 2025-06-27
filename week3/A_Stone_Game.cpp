#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int maxval_index = 0,minval_index = 0;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == n) {
            maxval_index = i+1;
        }
        if(arr[i] == 1) {
            minval_index = i+1;
        }
    }
        int min_index = min(maxval_index, minval_index);
        int max_index = max(maxval_index, minval_index);

    cout << min(max_index , min(n - min_index +1 , min_index - max_index + n +1)) << endl;

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