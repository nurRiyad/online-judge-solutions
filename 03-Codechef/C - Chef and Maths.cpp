#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
#define mx 1000009
ll ar[mx+10];

ll solve(ll x){
    ll gun=1;
    ar[1]=1;
    for(ll i=2;i<=x;i++){
        gun=(gun*i)%mod;
        ar[i]=(ar[i-1]*gun)%mod;
    }
    return ar[x];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
