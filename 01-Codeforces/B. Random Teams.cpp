#include<bits/stdc++.h>
using namespace std;

long long Pair(long long n){
    return (n*(n-1))/2;
}

int main()
{
    long long n,m;
    cin>>n>>m;
    int mx=Pair(n-(m-1));
    //cout<<mx<<endl;
    long long n1=n%m;
    long long n2=m-n1;
    long long k1=n2*Pair(n/m);
    long long n3=m-n2;
    long long k2=n3*Pair((n/m)+1);
    cout<<k1+k2<<" "<<mx<<endl;
    return 0;
}
