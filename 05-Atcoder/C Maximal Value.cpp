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
    vector<ll> v(n+3);
    for(ll i=0;i<n-1;i++) cin>>v[i];

    ll ar[n+4];
    memset(ar,-1,sizeof(ar));
    for(ll i=0;i<n-1;i++){
        ll x=v[i];
        if(ar[i]==-1) ar[i]=x;
        else ar[i]=min(ar[i],x);

        if(ar[i+1]==-1) ar[i+1]=x;
        else ar[i+1]=min(ar[i+1],x);
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
       // cout<<ar[i]<<" ";
        sum+=ar[i];
    }
    //cout<<endl;
    cout<<sum<<endl;
    return 0;
}
