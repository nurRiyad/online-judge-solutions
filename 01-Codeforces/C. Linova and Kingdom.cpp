#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 200005
vector<ll> adj[mx];
priority_queue<ll> qp;

ll dfs(ll par,ll cur,ll lv){
    ll child=0;
    for(ll nod: adj[cur]){
        if(nod!=par){
            child+=dfs(cur,nod,lv+1);
        }
    }
    qp.push(lv-child);
    return child+1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0,1,0);
    ll ans=0;
    while(k--){
        ans+=qp.top();
        //cout<<qp.top().first<<" "<<qp.top().second<<endl;
        qp.pop();
    }
    cout<<ans<<endl;
    return 0;
}
