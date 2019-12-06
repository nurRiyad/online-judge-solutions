#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    char x=ar[0][0],y=ar[0][1];
    if(x==y){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==j)||(j==(n-i-1))){
                if(ar[i][j]!=x){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else{
                if(ar[i][j]!=y){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;

}
