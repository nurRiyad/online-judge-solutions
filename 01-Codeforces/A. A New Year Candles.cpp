#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,c,m;
    cin>>a>>b;
    m=a;
    while(a>=b){
        sum+=a/b;
        c=a%b;
        a=(a/b)+c;
    }
    cout<<sum+m<<endl;
    return 0;
}
