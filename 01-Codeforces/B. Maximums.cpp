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
    vector<ll> v(n),r(n+10);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll mx=0;
    for(ll i=0;i<n;i++){
        r[i]=v[i]+mx;
        mx=max(mx,r[i]);
    }
    for(ll i=0;i<n;i++){
        cout<<r[i]<<" ";
    }cout<<endl;
    return 0;
}
