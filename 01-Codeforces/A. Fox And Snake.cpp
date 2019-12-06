#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sw=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           if(i%2!=0){
            cout<<"#";
           }
           else if(sw==0){
                    if(j==n){
                       cout<<"#";
                       sw=1;
                    }
                    else cout<<".";
                }
           else if(sw==1){
                    if(j==1) cout<<"#";
                    else cout<<".";
                    if(j==n) sw=0;
           }
        }
        cout<<endl;
    }
    return 0;
}
