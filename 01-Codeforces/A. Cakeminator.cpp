#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,r,rs=0,cs=0;
    cin>>r>>c;
    char ar[r+1][c+1];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>ar[i][j];
        }
    }
    for(int i=1;i<=r;i++){
        int flag=1;
        for(int j=1;j<=c;j++){
            if(ar[i][j]=='S'){
                flag=0;
                break;
            }
        }
        if(flag) rs++;
    }
    for(int i=1;i<=c;i++){
        int flag=1;
        for(int j=1;j<=r;j++){
            //cout<<i<<" "<<j<<endl;
            if(ar[j][i]=='S'){
                flag=0;
                break;
            }
        }
        if(flag) cs++;
    }
    //cout<<rs<<" "<<cs<<endl;
    cout<<((rs*c)+(cs*r))-((rs*cs)) <<endl;
    return 0;
}

