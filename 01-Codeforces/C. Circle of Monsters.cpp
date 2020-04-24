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
        ll n;
        cin>>n;
        vector<ll> v(n),r(n);
        for(ll i=0;i<n;i++){
            cin>>v[i]>>r[i];
        }
        ll ans=0,mn=LLONG_MAX;
        for(ll i=0;i<n;i++){
            ll x=min(r[i],v[(i+1)%n]);
            ans+=v[(i+1)%n]-x;
            mn=min(mn,x);
        }
        ans+=mn;
        cout<<ans<<endl;
    }
    return 0;
}
