#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v[2005];
ll visit[2005],ans=-1;

void dfs(ll root,ll depth){
    ans=max(ans,depth);
    //cout<<ans<<endl;
    visit[root]=1;
    for(ll x:v[root]){
        if(visit[x]==0){
            dfs(x,1+depth);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    vector<ll> v1(n+5);
    for(ll i=1;i<=n;i++) cin>>v1[i];
    for(ll i=1;i<=n;i++){
        ll x=v1[i];
        if(x!=-1) v[x].push_back(i);
    }
    for(ll i=1;i<=n;i++){
        if(v1[i]==-1){
            dfs(i,1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
