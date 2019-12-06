#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long b,n,lsm=0,m;
    cin>>b>>n;
    m=n;
    for(int i=0;i<m;i++){
        long long p;
        cin>>p;
        if(i!=(n-1)) lsm+=p*b;
        else lsm+=p;
    }
    if(lsm%2==0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
    return 0;
}
