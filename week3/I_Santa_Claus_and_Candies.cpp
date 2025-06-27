#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    int i=1;
    while(i*i + i <= 2*n){
        i++;
    }
    cout << i-1 << endl;
    for(int j=1; j<i; j++){
        if(j == i-1 ){
            cout << j + n - (i-1)*i/2 << endl;
        }
        else{
            cout << j << " ";
        }
    }

}