#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else
       return n1;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(c>=0){
        c=c-gcd(a,c);
        //cout<<c<<endl;
        if(c<0){
            cout<<1<<endl;
            break;
        }
        c=c-gcd(b,c);
        //cout<<c<<endl;
        if(c<0){
            cout<<0<<endl;
            break;
        }
    }
    return 0;
}
