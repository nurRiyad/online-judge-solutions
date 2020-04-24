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
    ll ar[n+10];
    ar[0]=0;
    for(ll i=1;i<=n;i++){
        if(i==1) ar[i]=v[i-1];
        else ar[i]=ar[i-1]+v[i-1];
    }
    sort(v.begin(),v.end());
    ll br[n+10];
    br[0]=0;
    for(ll i=1;i<=n;i++){
        if(i==1) br[i]=v[i-1];
        else br[i]=br[i-1]+v[i-1];
    }
    ll q;
    cin>>q;
    while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            cout<<ar[c]-ar[b-1]<<endl;
        }
        else{
            cout<<br[c]-br[b-1]<<endl;
        }
    }
    return 0;
}
