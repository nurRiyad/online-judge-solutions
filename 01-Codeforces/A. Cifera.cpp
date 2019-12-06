#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        long long i,j;
        for(i=n,j=0;i<=m;i=i*n,j++){
            if(i==m){
                cout<<"YES"<<endl;
                cout<<j<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
