#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    long long a=(x1-x2)*(x1-x2);
    long long b=(y1-y2)*(y1-y2);
    double d=sqrt(a+b);
    long long ans=ceil(d/(2*r));
    cout<<ans<<endl;
    return 0;
}
