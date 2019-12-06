#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v[50];
ll visit[100];
ll ar[50];

void dfs(ll node){
    //cout<<node<<endl;
    visit[node]=1;
    for(ll i=0;i<v[node].size();i++){
        ll x=v[node][i];
        if(visit[x]==0) dfs(x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==1){
            ll x=s[0]-'a';
            ar[x]++;
        }
        for(ll i=0;i<s.size()-1;i++){
            ll x=s[i]-'a';
            ar[x]++;
            ll y=s[i+1]-'a';
            ar[y]++;
            v[x].push_back(y);
            v[y].push_back(x);
        }
    }
    ll cnt=0;
    for(ll i=0;i<30;i++){
        if(ar[i]>0&&visit[i]==0){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
