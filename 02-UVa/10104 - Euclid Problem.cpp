#include<bits/stdc++.h>
using namespace std;

long long egcd(long long a,long long b,long long &x,long long &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    long long x1,y1;
    long long d =  egcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}

int main()
{
    long long a,b;
    while(cin>>a>>b){
        long long x,y,z;
        z=egcd(a,b,x,y);
        if(a==b){
            x=0;
            y=1;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;

    }
    return 0;
}
