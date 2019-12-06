#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long x,y,a,ans;
    cin>>x>>y>>a;
    long long ar[]={x-y,x,y,y-x,-x,-y};
    a=((a%6)+6)%6;
    ans=((ar[a]%mod)+mod)%mod;
    cout<<ans<<endl;
    return 0;
}
