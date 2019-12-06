#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ati,bti;
    cin>>a>>b>>ati>>bti;
    int x=max((3*a)/10,(a-(a/250)*ati));
    int y=max((3*b)/10,(b-(b/250)*bti));
    if(x>y) cout<<"Misha"<<endl;
    else if(y>x) cout<<"Vasya"<<endl;
    else cout<<"Tie"<<endl;
    return 0;
}
