#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int diff(pair<int,int> a , pair <int,int> b){
    return abs(a.first-b.first) + abs(a.second-b.second);
}
int main(){
    int t;
    cin >> t;
    string result = "";
    for(int j=0;j<t;j++){
        int n;
        cin >> n;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        vector<pair<int,int>> points(n);
        for(int i=0;i<n;i++){
            points[i] = {a[i],a[i+n]};
        }
        sort(points.begin(),points.end());
        int total=0;
        for(int i=1;i<n;i++){
            total = total + diff(points[i],points[i-1]);
        }
        result = result + to_string(total) + "\n";
        for(auto point : points){
            result = result + to_string(point.first) + " " + to_string(point.second) +"\n";
        }
    }
    cout << result;
}
