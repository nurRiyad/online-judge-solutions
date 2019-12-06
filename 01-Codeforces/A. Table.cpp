#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(v[0][i]==1||v[n-1][i]==1){
            cout<<2<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i][0]==1||v[i][m-1]==1){
            cout<<2<<endl;
            return 0;
        }
    }
    cout<<4<<endl;
    return 0;
}
