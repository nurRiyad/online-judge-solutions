#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a;
    while(cin>>a){
        if(a==0) return 0;
        long long x=sqrt(a);
        if((x*x)==a) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
