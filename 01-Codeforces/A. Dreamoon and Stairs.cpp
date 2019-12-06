#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<-1<<endl;
    }
    else{
        int x,flag=1;
        if(n%2!=0) x=(n/2)+1;
        else x=n/2;
        for(int i=x;i<=n;i++){
            if(i%m==0){
                cout<<i<<endl;
                flag=0;
                break;
            }
        }
        if(flag) cout<<-1<<endl;
    }
    return 0;
}
