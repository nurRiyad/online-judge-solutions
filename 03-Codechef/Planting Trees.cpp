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
        map<ll,ll> mp;
        ll n,cnt=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<v.size();i++){
            ll x=v[i];
            if(mp.find(x+1)!=mp.end()) continue;
            if(mp.find(x-1)!=mp.end()) continue;
            x=x+1;
            mp[x]++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
