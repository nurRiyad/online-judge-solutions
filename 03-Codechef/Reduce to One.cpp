#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
vector<ll> v;

void r2o(){
    v.push_back(0);
    v.push_back(1);
    ll ans=1;
    for(ll i=2;i<1000005;i++){
        ll x=ans+i+(ans*i);
        if(x>=mod) x=x%mod;
        ans=x;
        v.push_back(ans);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    r2o();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<v[n]<<endl;
    }
    return 0;
}
