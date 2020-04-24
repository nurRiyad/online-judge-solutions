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
    vector<ll> adj[n+10];
    for(ll i=1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        a--;b--;
        adj[a].push_back(i);
        adj[b].push_back(i);
    }
    ll k=0;
    ll ar[n+10];
    memset(ar,-1,sizeof(ar));
    for(ll i=0;i<n;i++){
        if(adj[i].size()<=2) continue;
        for(ll el:adj[i]){
            if(ar[el]==-1){
                ar[el]=k;
                k++;
            }
        }
    }
    for(ll i=1;i<n;i++){
        if(ar[i]==-1){
            ar[i]=k;
            k++;
        }
    }
    for(ll i=1;i<n;i++) cout<<ar[i]<<endl;
    return 0;
}
