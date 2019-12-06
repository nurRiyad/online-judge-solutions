#include<bits/stdc++.h>
using namespace std;

bool isprime(long long a){
    if(a<=1) return false;
    if(a<=3) return true;
    if(a%2==0||a%3==0) return false;
    for(int i=5;i*i<=a;i+=6){
        if(a%i==0||a%(i+2)==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a;
        b=sqrt(a);
        if(b*b==a){
            if(isprime(b)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
