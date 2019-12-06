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
    vector<pair<ll,ll> > vp;
    for(ll i=0;i<t;i++){
        ll a,b;
        cin>>a>>b;
        vp.push_back(make_pair(b,a));
    }
    sort(vp.rbegin(),vp.rend());
    ll point=0,tern=1;
    for(ll i=0;i<vp.size()&&tern>0;i++,tern--){
        ll c=vp[i].first;
        ll d=vp[i].second;
        //cout<<c<<" "<<d<<endl;
        point+=d;
        tern+=c;
    }
    cout<<point<<endl;
    return 0;
}
