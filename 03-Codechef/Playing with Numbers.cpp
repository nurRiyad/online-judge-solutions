#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll val[100001];
ll rem[100001];
ll res[100001];
vector<ll> leaf;
long int n;

ll gcd(ll x,ll y){
    if(x==0) return y;
    else return gcd(y%x,x);
}

ll cal(ll x,ll node){
    ll y=rem[node];
    x=gcd(x,y);
    return y-x;
}

void dfs(ll x,ll y,ll g){
    g=gcd(g,val[x]);
    ll sz=vect[x].size();
    for(ll i=0;i<sz;++i){
        if(vect[x][i]==y)
            continue;
        dfs(vect[x][i],x,g);
    }
    if(sz==1){
        if(x!=1){
            leaf.push_back(x);
            res[x]=cal(g,x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input12.txt","r",stdin);
    //freopen("output12.txt","w",stdout);
    ll t;
    cin>> t;
    while(t--){

        cin>> n;
        vector<ll> vect[n+5];
        leaf.clear();
        ll x,y;
        for(ll i=1;i<n;++i){
            cin>> x>> y;
            vect[x].push_back(y);
            vect[y].push_back(x);
        }
        for(ll i=1;i<=n;++i)
            cin>> val[i];
        for(ll i=1;i<=n;++i)
            cin>> rem[i];
        dfs(1,1,val[1]);
        sort(leaf.begin(),leaf.end());
        ll sz=leaf.size();
        for(ll i=0;i<sz;++i)
            cout<< res[leaf[i]]<<" ";
        cout<<"\n";
    }
    return 0;
}
