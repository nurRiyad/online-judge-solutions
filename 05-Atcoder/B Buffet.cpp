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
    vector<ll> a(n+1),b(n+1),c(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) cin>>b[i];
    for(ll i=1;i<n;i++) cin>>c[i];

    ll sum=0;
    for(ll i=1;i<=n;i++){
        ll x=a[i];
        sum+=b[x];
        if(i<n){
            if(a[i+1]-a[i]==1){
                ll y=a[i];
                sum+=c[y];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
