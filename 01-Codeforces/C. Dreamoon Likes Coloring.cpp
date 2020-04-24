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
    vector<ll> v(k);
    for(ll i=0;i<k;i++) cin>>v[i];
    vector<pair<ll,ll > > vp;
    for(ll i=0;i<v.size();i++){
        ll x=n-v[i]+1;
        ll y=v[i]-1;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end());
    for(ll i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    return 0;
}
