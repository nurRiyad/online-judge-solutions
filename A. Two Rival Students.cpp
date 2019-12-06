#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,x,a,b;
        cin>>n>>x>>a>>b;
        ll xx=abs(a-b);
        ll c=min(a,b);
        ll d=max(a,b);
        ll y=abs(c-1)+abs(n-d);
        //cout<<xx<<" "<<y<<endl;
        ll ans=xx+min(x,y);
        cout<<ans<<endl;

    }
    return 0;
}

