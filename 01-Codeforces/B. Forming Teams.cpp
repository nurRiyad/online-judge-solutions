#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> vp[100];
ll visit[1000];
ll parent[1000];
ll n,m,cnt=0;

bool dfs(ll node,ll prnt,ll &cnt){
    if(visit[node]) return true;
    visit[node]=1;
    for(auto x: vp[node]){
        if(x!=prnt){
            cnt++;
            if(dfs(x,node,cnt)) return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //ll n,m;
    cin>>n>>m;
    //vector<pair<ll,ll> > vp;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        vp[a].push_back(b);
        vp[b].push_back(a);
    }
    ll rm=0;
    for(ll i=1;i<=n;i++){
        ll cnt=0;
        if(visit[i]==0){
            if(dfs(i,0,cnt)){
                //cout<<"riyad="<<cnt<<endl;
                if(cnt%2==1) rm++;
            }
        }
    }
    if((n-rm)%2==1) rm++;
    cout<<rm<<endl;
    return 0;
}

