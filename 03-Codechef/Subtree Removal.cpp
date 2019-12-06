#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100009],k;

ll dfs(vector<ll> v[],ll root,ll par){
    ll sum=a[root];
    for(ll i=0;i<v[root].size();i++){
        if(v[root][i]==par) continue;
        else sum+=dfs(v,v[root][i],root);
    }
    sum=max(sum,-k);
    return sum;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n>>k;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<ll> v[n+2];
        for(ll i=0;i<n-1;i++){
            ll a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        ll sum=dfs(v,1,0);
        cout<<sum<<endl;
    }
    return 0;
}
