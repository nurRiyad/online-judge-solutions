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
    ll mx=INT_MIN,mn=INT_MAX;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mx=max(v[i],mx);
        mn=min(mn,v[i]);
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(v[i]<mx&&v[i]>mn) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

