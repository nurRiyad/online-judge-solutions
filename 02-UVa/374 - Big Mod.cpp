#include<bits/stdc++.h>
using namespace std;

int bigmod(long long a,long long b, long long c){
    if(b==0) return 1%c;
    int x=bigmod(a,b/2,c);
    x=(x*x)%c;
    if(b%2==1) x=(x*a)%c;
    return x;
}

int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c){
        cout<<bigmod(a,b,c)<<endl;
    }
    return 0;

}
