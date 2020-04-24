#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    ll cnt=0;
    vector<pair<ll,ll> > vp;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        cnt+=min(a,b);
        vp.push_back({a,b});
    }
    vector<ll> r;
    for(ll i=0;i<vp.size();i++){
        ll x=min(vp[i].first*2,vp[i].second)-min(vp[i].first,vp[i].second);
        r.push_back(x);
    }
    sort(r.rbegin(),r.rend());
    for(ll i=0;i<min((ll)r.size(),k);i++){
        cnt+=r[i];
    }
    cout<<cnt<<endl;
    return 0;
}
