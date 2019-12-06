#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,h,m;
    cin>>n>>h>>m;
    ll ar[n+2];
    for(ll i=1;i<=n;i++) ar[i]=h;
    for(ll i=0;i<m;i++){
        ll l,r,x;
        cin>>l>>r>>x;
        for(ll j=l;j<=r;j++){
            if(ar[j]>x) ar[j]=x;
        }
    }
    ll sum=0;
    for(ll i=1;i<=n;i++){
        sum+=(ar[i]*ar[i]);
    }
    cout<<sum<<endl;
    return 0;
}
