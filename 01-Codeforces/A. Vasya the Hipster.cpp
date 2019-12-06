#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>a) swap(a,b);
    cout<<b<<" ";
    a=a-b;
    cout<<a/2<<endl;
    return 0;

}
