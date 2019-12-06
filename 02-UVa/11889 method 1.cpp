#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
long long lcm(long long a,long long b){
    return (a*b)/gcd(a,b);
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        if(b%a!=0){
            cout<<"NO SOLUTION"<<endl;
            continue;
        }
        long long x=b/a;
        for(long long i=x;i<=b;i+=x){
            if(lcm(i,a)==b){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

