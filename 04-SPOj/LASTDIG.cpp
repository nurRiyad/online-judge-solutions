#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bigmod(ll a,ll x,ll m){
    if(x==0) return (ll)1%m;
    ll b=bigmod(a,x/(ll)2,m);
    b =(b*b)%m;
    if(x%2==1) b=(b*a)%m;
    return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,m=10;
        cin>>a>>b;
        ll ans=bigmod(a,b,m);
        cout<<ans<<endl;
    }
    return 0;
}
