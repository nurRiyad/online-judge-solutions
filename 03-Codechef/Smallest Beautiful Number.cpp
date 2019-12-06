#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll> mp;
vector<ll> v;
ll n,sum=0;

ll solve(ll x,ll y){
    if(n==x){
        return mp[sum];
    }
    for(ll i=y;i<=9;i++){
        v[x]=i;
        sum+=(i*i);
        if(solve(x+1,i)){
            return 1;
        }
        sum-=(i*i);
    }
    return 0;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    for(ll i=1;i<10000;i++){
        mp[i*i]=1;
    }
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        v.resize(n);
        ll ans=solve(0,1);
        if(ans){
            for(ll i=0;i<n;i++) cout<<v[i];
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
