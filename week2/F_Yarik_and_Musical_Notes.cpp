#include <iostream>
#include <vector>
#include <map>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <long long> arr(n);
    map<long long ,long long> freq;
    long long result =0;
    for(auto &x : arr) {cin >> x;  
        freq[x]++;
    }
        for(auto [key, value] : freq ){
            result = result + value *(value-1)/2;
        }
        result = result + freq[2] * freq[1];
         cout << result <<"\n";
    }  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}