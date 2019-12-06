#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[1000][1000];
vector<ll> v;

ll dp(ll n,ll i){
    if(ar[n][i]!=-1) return ar[n][i];
    if(n==0) return 1;
    if(n<0) return 0;
    if(i<=0&&n>=1) return 0;
    ar[n][i]= dp(n,i-1)+dp(n-v[i-1],i);
    return ar[n][i];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    memset(ar,-1,sizeof(ar));
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll ans=dp(n,m);
    cout<<ans<<endl;
    return 0;
}

