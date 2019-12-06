#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    int a=sqrt((s1*s2)/s3);
    int b=sqrt((s2*s3)/s1);
    int c=sqrt((s1*s3)/s2);
    cout<<4*(a+b+c)<<endl;
    return 0;
}
