#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,d,sum=0,p;
    cin>>n>>m;
    p=n;
    while(n>0){
        d=n/m;
        sum+=d;
        n=d+(n%m);
        cout<<n<<endl;
    }
    cout<<sum+p<<endl;
    return 0;
}
