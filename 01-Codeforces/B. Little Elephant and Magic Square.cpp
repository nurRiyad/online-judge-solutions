#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    i=(b+d)/2;
    int sum=c+f+i;
    a=sum-(b+c);
    e=sum-(d+f);
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<d<<" "<<e<<" "<<f<<endl;
    cout<<g<<" "<<h<<" "<<i<<endl;
    return 0;
}
