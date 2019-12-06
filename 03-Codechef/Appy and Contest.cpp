#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,a,b,k;
        cin>>n>>a>>b>>k;
        long long bothdiv=(a*b)/gcd(a,b);
        //cout<<bothdiv<<endl;
        long long sum=((n/a)+(n/b))-(2*(n/bothdiv));
        //cout<<sum<<endl;
        if(sum>=k) cout<<"Win"<<endl;
        else cout<<"Lose"<<endl;
    }
    return 0;
}
