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
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll mx=INT_MIN;
        for(ll i=0;i<v.size();i++){
            ll x=v[i];
            ll y=v.size()-i;
            ll m=min(x,y);
            mx=max(m,mx);

        }
        cout<<mx<<endl;
    }
    return 0;
}

