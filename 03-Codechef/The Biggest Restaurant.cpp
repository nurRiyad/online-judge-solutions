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
        vector<ll> x(n),h(n);
        for(ll i=0;i<n;i++){
            cin>>x[i];
            cin>>h[i];
        }
        vector<ll> d,dd;
        for(ll i=1;i<n;i++){
            ll xx=abs(x[i]-x[i-1]);
            d.push_back(xx);
        }
        for(ll i=0;i<=d.size();i++){
            if(i==0) dd.push_back(d[i]);
            else if(i==d.size()) dd.push_back(d[i-1]);
            else dd.push_back(d[i]+d[i-1]);
        }
        for(ll i=0;i<dd.size();i++) cout<<dd[i]<<" ";
        sort(dd.begin(),dd.end());
        sort(h.begin(),h.end());
        ll ans=0;
        for(ll i=0;i<h.size();i++){
            ans+=(h[i]*dd[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

