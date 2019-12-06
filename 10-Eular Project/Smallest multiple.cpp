#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long d=1;
    for(long long i=1;i<=20;i++){
        d=(i*d)/gcd(i,d);
        cout<<d<<endl;
    }
    return 0;
}
