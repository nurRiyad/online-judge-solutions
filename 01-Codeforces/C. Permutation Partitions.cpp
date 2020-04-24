#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),r(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        r[i]=v[i];
    }
    sort(r.rbegin(),r.rend());
    ll ans1=1,ans2=0,mx=0;
    for(ll i=0;i<k;i++){
        mp[r[i]]++;
        ans2+=r[i];
    }
    vector<ll> rr;
    for(ll i=0;i<n;i++){
        if(mp.count(v[i])){
            //cout<<i+1<<endl;
            rr.push_back(i+1);
        }
    }
    for(ll i=1;i<rr.size();i++){
        ll x=rr[i]-rr[i-1];
        ans1=(ans1*x)%mod;
    }
    cout<<ans2<<" "<<ans1<<endl;
    return 0;
}
