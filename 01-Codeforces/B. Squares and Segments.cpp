#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,m=INT_MAX,n=INT_MAX,o=INT_MAX;
    cin>>a;
    int x=sqrt(a);
    if(x*x==a) m=x+x;
    //cout<<m<<endl;
    if(x*(x+1)>=a) n=x+x+1;
    //cout<<n<<endl;
    if(((x+1)*(x+1))>=a) o=x+x+2;
    //cout<<o<<endl;
    cout<<min(m,min(n,o))<<endl;
    return 0;
}
