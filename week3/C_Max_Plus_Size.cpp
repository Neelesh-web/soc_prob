#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int max_element_left = 0;
    int max_element_right = 0;
    int result = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i % 2 == 0){
            if(arr[i] > max_element_left) {
                max_element_left = arr[i];
            }
        }
        else {
            if(arr[i] > max_element_right) {
                max_element_right = arr[i];
            }
        }
    }
    if(n %2 ==0){

    
        result = max(max_element_left + n/2 , max_element_right + n/2);}
        else {
            result = max(max_element_left + n/2 + 1 , max_element_right + n/2);
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