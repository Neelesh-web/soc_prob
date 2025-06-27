#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    char temp;
    int take;
    cin>>t;
    for(int test=0;test<t;test++){
        int n;
        cin>>n;

        string row1;
        cin>>row1;
        string row2;
        cin>>row2;
        
        int i=0;
        int row=1;
        int nmove=0;
        int flag=true;
        do{
            if(row==1){
                if(row1[i+1]=='<'){
                    if(row2[i]=='<'){
                        cout<<"NO"<<endl;
                        flag = false;
                        break;
                    }
                    row = 2;
                    i=i+1;
                    nmove++;
                }
                else{
                    i=i+2;
                    nmove=0;
                }
            }
            else{
                if(row2[i+1]=='<'&&i!=n-2){
                    if(row1[i]=='<'){
                        cout<<"NO"<<endl;
                        flag = false;
                        break;
                    }
                    row = 1;
                    i=i+1;
                    nmove++;
                }
                else{
                    i=i+2;
                    nmove=0;
                }
            }
            if(nmove>=2){
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }while(i<=n-2);
        if(flag){
            cout<<"YES"<<endl;
        }
    }
}