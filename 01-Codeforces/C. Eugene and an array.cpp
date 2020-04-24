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
    ll ar[n+10];
    ar[0]=0;
    for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        ar[i]=ar[i-1]+a;
    }

    map<ll,ll> mp;
    mp[0]=0;
    ll ans=0,l=0;
    for(ll i=1;i<=n;i++){
        if(mp.count(ar[i])){
            l=max(l,mp[ar[i]]+1);
        }
        ans+=i-l;
        mp[ar[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}
