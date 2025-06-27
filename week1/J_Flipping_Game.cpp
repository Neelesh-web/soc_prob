#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr ;
    for(int i=0;i<n;i++){
        int sample;
        cin >> sample;
        arr.push_back(sample);
    }
    int one=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1) {one++;
        arr[i]=-1;}
        else arr[i] = 1;
    }
    int sum=arr[0],j=arr[0];
    for(int i=1;i<arr.size();i++){
        sum = max(arr[i],sum+arr[i]);
        j=max(j,sum);
    }
    cout << one + j;
}