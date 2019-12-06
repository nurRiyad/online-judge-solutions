#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,sum=0,a,b;
    cin>>n>>k;
    if(k==1){
        cout<<1<<endl;
        return 0;
    }
    if((((k-1)*2)+1)<=n){
        cout<<2*(k-1)+1<<endl;
    }
    else{
        if(n%2==0){
            a=n/2;
            k=k-a;
        }
        else{
            a=(n/2)+1;
            k=k-a;
        }
        cout<<2*k<<endl;
    }

    return 0;
}
