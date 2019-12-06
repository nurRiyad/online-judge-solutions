#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    vector<ll> dif;
    for(ll i=1;i<v.size();i++) dif.push_back(v[i]-v[i-1]);
    sort(dif.begin(),dif.end(),greater<int>());

    ll result=v[n-1]-v[0];
    for(ll i=0;i<k-1;i++) result=result-dif[i];
    cout<<result<<endl;

    return 0;
}
