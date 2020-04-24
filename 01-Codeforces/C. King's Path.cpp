#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,vector<pair<ll,ll> > > mp;
map<pair<ll,ll>,ll> vis;
map<pair<ll,ll>,ll> lev;
ll movx[]={-1,-1,-1,0,0,1,1,1};
ll movy[]={-1,0,1,-1,1,-1,0,1};

void bfs(ll i,ll j){
    lev[{i,j}]=0;
    vis[{i,j}]=1;
    queue<pair<ll,ll> > qu;
    qu.push({i,j});
    while(!qu.empty()){
        pair<ll,ll> cnode=qu.front();
        qu.pop();
        for(ll i=0;i<8;i++){
            ll x=cnode.first+movx[i];
            ll y=cnode.second+movy[i];
            if(!vis.count({x,y})){
                if(x>=1&&x<=1e9&&y>=1&&y<=1e9){
                    bool flag=false;
                    vector<pair<ll,ll> > vp=mp[x];
                    for(ll j=0;j<vp.size();j++){
                        if(y>=vp[j].first&&y<=vp[j].second){
                            flag=true;
                            break;
                        }
                    }
                    if(flag){
                        vis[{x,y}]=1;
                        lev[{x,y}]=lev[{cnode.first,cnode.second}]+1;
                        qu.push({x,y});
                    }
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll x0,x1,y0,y1;
    cin>>x0>>y0>>x1>>y1;
    ll n;
    cin>>n;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        mp[a].push_back({b,c});
    }
    bfs(x0,y0);
    if(vis.count({x1,y1})) cout<<lev[{x1,y1}]<<endl;
    else cout<<-1<<endl;
    return 0;
}
