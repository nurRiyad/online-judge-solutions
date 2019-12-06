#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[1000][1000];

ll dp(ll n,ll a){
    if(ar[n][a]!=-1) return ar[n][a];
    if(n==0) return 1;
    if(a==0){
        ar[n][a]= dp(n-1,0)+dp(n-1,1);
        return ar[n][a];
    }
    if(a==1){
        ar[n][a]=dp(n-1,0);
        return ar[n][a];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll t,tt=0,nn;
    cin>>t;
    nn=t;
    while(t--){
        memset(ar,-1,sizeof(ar));
        ll n;
        cin>>n;
        ll ans=dp(n,0);
        cout<<"Scenario #"<<++tt<<":"<<endl;
        cout<<ans<<endl;
        cout<<endl;
    }

    return 0;
}

