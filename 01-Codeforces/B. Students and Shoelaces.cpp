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
    vector<ll> adj[200];
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll ans=0;
    while(true){
        vector<ll> s;
        for(ll i=1;i<=n;i++){
            if(adj[i].size()==1) s.push_back(i);
        }
        if(s.size()==0) break;
        ans++;
        for(auto nod:s){
            for(auto i:adj[nod]){
                adj[i].erase(find(adj[i].begin(),adj[i].end(),nod));
            }
            adj[nod].clear();
        }
    }
    cout<<ans<<endl;
    return 0;
}
