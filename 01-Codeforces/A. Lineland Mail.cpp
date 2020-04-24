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
    cout<<abs(v[0]-v[1])<<" "<<abs(v[0]-v[n-1])<<endl;
    for(ll i=1;i<n-1;i++){
        ll x=abs(v[i]-v[i+1]);
        ll y=abs(v[i]-v[i-1]);
        ll a=abs(v[0]-v[i]);
        ll b=abs(v[n-1]-v[i]);
        cout<<min(x,y)<<" "<<max(a,b)<<endl;
    }
    cout<<abs(v[n-1]-v[n-2])<<" "<<abs(v[0]-v[n-1])<<endl;
    return 0;
}

