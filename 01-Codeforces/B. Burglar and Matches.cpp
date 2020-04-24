#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > vp;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        vp.push_back({b,a});
    }
    sort(vp.rbegin(),vp.rend());
    ll cnt=0;
    for(ll i=0;i<vp.size();i++){
        //cout<<vp[i].first<<" "<<vp[i].second<<endl;
        if(vp[i].second<=n){
            cnt+=(vp[i].first*vp[i].second);
            n-=vp[i].second;
        }
        else{
            cnt+=(vp[i].first*n);
            n-=vp[i].second;
        }
        if(n<=0) break;
    }
    cout<<cnt<<endl;

    return 0;
}
