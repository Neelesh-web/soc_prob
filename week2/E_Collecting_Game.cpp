#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
void output(int n,vector<int> a){
    vector<pair<int,int>> c;
    for(int i = 0;i<n;i++){
        c.push_back({a[i],i});
    }
    sort(c.begin(),c.end());
    vector<ll> prefix;
    ll sum = 0;
    for(pair<int,int> x : c){
        sum += (ll)x.first;
        prefix.push_back(sum);
    }
    vector<int> b(n);
    int pos = 0;
    for(int i = 0;i<n;i++){
        while(pos<n-1 && prefix[pos]>=c[pos+1].first) pos++;
        b[c[i].second] = pos;
        pos = max(i+1,pos);
    }
    for(int x : b) cout<<x<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int test;
        cin >> test;
        vector <int> arr(test);
      for(int i=0;i<test;i++){
        cin >> arr[i];
      }
      output(test,arr);
        
}
}