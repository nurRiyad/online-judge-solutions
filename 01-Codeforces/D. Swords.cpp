#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a,ll b){
     return (a*b)/__gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,mx=INT_MIN;
    cin>>n;
    vector<ll> v(n);
    ll gd=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v[i]=a;
        mx=max(a,mx);
        gd=__gcd(gd,a);
    }
    if(n==2){
        ll x=abs(v[0]-v[1]);
        cout<<1<<" "<<x<<endl;
        return 0;
    }
    ll cnt=0;
    for(ll i=0;i<v.size();i++){
        ll x=mx-v[i];
        //cout<<x<<endl;
        cnt+=x/gd;
    }
    cout<<cnt<<" "<<gd<<endl;
    return 0;
}
