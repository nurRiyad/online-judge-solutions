#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll findn(ll d, ll k){
    ll p = 0;
    for (ll n=1; ; n++){
        ll previousp = p;
        p += n*d;
        if (previousp < k && k <= p) return n;
    }
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
        ll n,d,k;
        cin>>n;
        vector<ll> v(n+2);
        for(ll i=0;i<=n;i++) cin>>v[i];
        cin>>d>>k;
        ll x=findn(d,k);
        //cout<<findn(d,k)<<endl;
        ll ans=0;
        for(ll i=0;i<v.size();i++){
            ll y=pow(x,i);
            ans+=(v[i]*y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
