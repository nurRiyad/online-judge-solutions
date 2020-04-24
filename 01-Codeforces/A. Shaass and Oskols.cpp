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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll a;
    cin>>a;
    while(a--){
        ll x,y;
        cin>>x>>y;
        ll d1=y-1;
        ll d2=v[x-1]-y;
        v[x-1]=0;
        if(x-2>=0) v[x-2]+=d1;
        if(x<=n-1) v[x]+=d2;
    }
    for(ll i=0;i<n;i++) cout<<v[i]<<endl;
    return 0;
}

