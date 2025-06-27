#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int best =1,count =1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];   
    }
    for(int i = 1; i < n; i++){
         if(arr[i] <= 2*arr[i-1]){
            count++;
            best = max(best, count);
        }
        else{
            count =1;
        }
    }
    cout << best << endl;

}