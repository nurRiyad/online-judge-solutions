#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 10000000
ll ar[mx+10];


ll fnc(ll a){

    if(a<mx&&ar[a]!=0) return ar[a];
    if(a<10) return a;
    ll x=fnc(a/2);
    ll y=fnc(a/3);
    ll z=fnc(a/4);

    ll ans=max(a,x+y+z);
    if(a<mx){
        ar[a]=ans;
        return ar[a];
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    while(cin>>n){
        ll ans=fnc(n);
        cout<<ans<<endl;
    }
    return 0;
}
