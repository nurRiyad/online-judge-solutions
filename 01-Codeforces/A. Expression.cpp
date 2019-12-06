#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mx=0,s1,s2,s3,s4,s5,s6;
    cin>>a>>b>>c;
    s1=a*b*c;
    if(mx<s1) mx=s1;
    s2=a*b+c;
    if(mx<s2) mx=s2;
    s3=a+b*c;
    if(mx<s3) mx=s3;
    s4=(a+b)*c;
    if(mx<s4) mx=s4;
    s5=a*(b+c);
    if(mx<s5) mx=s5;
    s6=a+b+c;
    if(mx<s6) mx=s6;
    cout<<mx<<endl;
    return 0;

}
