#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 100009
vector<ll> v[mx+10];
ll visit[mx+10];

void dfs(ll n){
    visit[n]=1;
    for(ll i=0;i<v[n].size();i++){
        ll x=v[n][i];
        if(visit[x]==0){
            dfs(x);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m,k;
    cin>>n>>m>>k;

    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        if(visit[i]==0){
            dfs(i);
            cnt++;
        }
    }
    if(cnt>k){
        cout<<-1<<endl;
        return 0;
    }
    else{
        cout<<m-(n-k)<<endl;
        return 0;
    }
    return 0;
}
