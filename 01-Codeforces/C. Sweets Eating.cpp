#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i++) v[i]+=v[i-1];
    for(ll i=m;i<n;i++) v[i]+=v[i-m];
    for(ll i=0;i<n-1;i++) cout<<v[i]<<" ";
    cout<<v[n-1]<<endl;
    return 0;
}
