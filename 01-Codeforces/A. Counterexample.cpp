#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main()
{
    long long l,r;
    cin>>l>>r;
    if(abs(l-r)==1){
        cout<<-1<<endl;
        return 0;
    }
    for(long long  i=l;i<r-1;i++){
        if(gcd(i,i+2)!=1){
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
