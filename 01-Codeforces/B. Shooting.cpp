#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    vector<pair<ll,ll> > vp;
    for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        vp.push_back(make_pair(a,i));
    }
    sort(vp.rbegin(),vp.rend());
    ll x=0;
    for(ll i=0;i<vp.size();i++){
        x+=(vp[i].first*i)+1;
        //cout<<x<<endl;
    }
    cout<<x<<endl;
    for(ll i=0;i<vp.size();i++){
        if(i!=vp.size()-1) cout<<vp[i].second<<" ";
        else cout<<vp[i].second<<endl;
    }
    return 0;
}
