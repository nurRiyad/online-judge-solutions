#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mk  make_pair
#define pb  push_back

ll solve(vector<ll> a,vector<ll> b,vector<ll> c){
    ll ans=LLONG_MAX;
    for(ll i=0;i<a.size();i++){
        ll x=a[i];
        auto y=lower_bound(b.begin(),b.end(),x);
        auto z=upper_bound(c.begin(),c.end(),x);
        if(z==c.begin()||y==b.end()) continue;
        z--;
        ll cnt=((x-*y)*(x-*y))+((x-*z)*(x-*z))+((*y-*z)*(*y-*z));
        ans=min(ans,cnt);
    }
    return ans;
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
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll> v1(a),v2(b),v3(c);
        for(ll i=0;i<a;i++) cin>>v1[i];
        for(ll i=0;i<b;i++) cin>>v2[i];
        for(ll i=0;i<c;i++) cin>>v3[i];
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        ll ans=LLONG_MAX;

        ans=min(solve(v1,v2,v3),ans);
        ans=min(solve(v1,v3,v2),ans);
        ans=min(solve(v2,v1,v3),ans);
        ans=min(solve(v2,v3,v1),ans);
        ans=min(solve(v3,v1,v2),ans);
        ans=min(solve(v3,v2,v1),ans);
        cout<<ans<<endl;
    }
    return 0;
}
