#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int players,target;
    cin >> players >> target;
    vector <int> powers(players);
    for(int i=0;i<players;i++){
        cin >> powers[i];
    }
    sort(powers.begin(),powers.end());
    int temp=players;
    int result=0;
    for(int i=0;i<players;i++){
        int s = target/powers[players-i-1] + 1;
        if(temp>=s){
            result++;
            temp = temp - s;
        }
        else break;
    }
    cout << result;
}