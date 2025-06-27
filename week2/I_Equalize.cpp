#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    ll left =0 ,maxsum = 0;
    for(ll right = 0; right < arr.size(); right++) {
        while(arr[right] - arr[left] > n-1) {
            left++;
        }
        maxsum = max(maxsum, right - left + 1);
    }
    cout << maxsum << endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}