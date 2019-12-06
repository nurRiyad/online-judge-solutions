#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,ac=0,sum=0,mx=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ac=b-a;
        sum+=ac;
        if(mx<sum){
            mx=sum;
        }
    }
    cout<<mx<<endl;
    return 0;

}
