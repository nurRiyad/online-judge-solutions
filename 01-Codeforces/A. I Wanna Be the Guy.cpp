#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,x,y;
    cin>>t;
    int a[t];
    for(int i=1;i<=t;i++){
        a[i]=0;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        a[x]++;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        a[y]++;
    }
    for(int i=1;i<=t;i++){
        if(a[i]==0){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}
