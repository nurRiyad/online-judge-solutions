#include<bits/stdc++.h>
using namespace std;
#define ll long long


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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll d=v[0],res=v[0]-v[1];
        for(ll i=1;i<n;i++){
            ll s=d-v[i];
            res=max(s,res);
            d=max(d,v[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}
