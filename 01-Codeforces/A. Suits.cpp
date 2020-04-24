#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll e,f;
    cin>>e>>f;
    ll ans=0;

    //when suit 1 is important
    ll x=min(a,d);
    ll nd=d-x;
    ll y=min(nd,min(b,c));
    ll cnt1=(x*e)+(y*f);
    ans=max(ans,cnt1);

    //when suit 2 in important
    x=min(d,min(b,c));
    nd=d-x;
    y=min(nd,a);
    ll cnt2=(x*f)+(y*e);
    ans=max(ans,cnt2);

    cout<<ans<<endl;
    return 0;
}

