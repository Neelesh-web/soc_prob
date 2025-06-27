#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int t;
    cin >> t;
    while(t--){
         long double n;
        cin >> n;
        if( n >= 4 || n==0){
            long double result;
            cout << "Y ";
            result = (long double)((n+sqrtl(n*n - 4*n))/2);
            cout << fixed << setprecision(9) << result << " " << n-result <<endl;
        }
        else {
            cout << "N\n";
        }

    }
    return 0 ;
}