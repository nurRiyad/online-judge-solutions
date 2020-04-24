#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    ll ar[n+10];
    for(ll i=1;i<=n;i++) cin>>ar[i];
    for(ll i=2;i<=n;i++){
        ar[i]=ar[i]+ar[i-1];
    }
    ll mn=ar[k];
    ll mnind=1;
    for(ll i=k+1;i<=n;i++){
        ll x=ar[i]-ar[i-k];
        if(x<mn){
            mn=x;
            mnind=i-k+1;
        }
    }
    cout<<mnind<<endl;
    return 0;
}
