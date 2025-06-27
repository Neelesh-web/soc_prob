#include <iostream>
#include <cmath>
#include <vector>
 
using namespace std;
int main(){
    int n ,t;
    cin >> n >> t;
    vector<int> arr;
    int sample;
    for(int i=0;i<n;i++){
        cin >> sample;
        arr.push_back(sample);
    }
    int sum =0 ;
    int j=0;
    int books = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        while(sum > t){
            sum = sum -arr[j];
            j++;
        }
    books = max(books,i-j+1);
}
    cout << books;    
}