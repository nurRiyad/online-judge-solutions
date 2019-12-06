#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,pos=1,neg=0;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a>0) v[i]=1;
        if(a<0) v[i]=-1;
    }

    for(ll i=0;i<n;i++){
        if(i>0) v[i]*=v[i-1];
        if(v[i]==1) pos++;
        else neg++;
    }
    ll x=pos*neg;
    ll y=(n*(n+1))/2-x;
    cout<<x<<" "<<y<<endl;
    return 0;
}
