#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> freq(10, 0);  
    freq[0] = 3;
    freq[1] = 1;
    freq[2] = 2;
    freq[3] = 1;
    freq[5] = 1;
    int result =0; 
    for (int i = 0; i < n; ++i) {
        int d;
        cin >> d;
        freq[d]--;
        if(freq[1] > 0 || freq[2] >0 || freq[0] > 0||freq[3] > 0 || freq[5] > 0){
            result++;
        }
        
    }
    if(freq[1] > 0 || freq[2] >0 || freq[0] > 0||freq[3] > 0 || freq[5] > 0){
        cout << 0 <<endl;
    }
    else {
        cout << result+1 << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
