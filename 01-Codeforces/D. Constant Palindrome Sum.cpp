#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mk  make_pair
#define pb  push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ar[2*k+10];
        memset(ar,0,sizeof(ar));
        for(ll i=0,j=n-1;i<n/2;i++,j--){
            ll x=v[i]+v[j];
            ar[x]++;
        }
        ll br[2*k+10];
        memset(br,0,sizeof(br));
        for(ll i=0,j=n-1;i<n/2;i++,j--){
            ll a=v[i]+1;
            ll b=v[j]+1;
            ll c=v[i]+k;
            ll d=v[j]+k;
            ll x=min(a,b);
            ll y=max(c,d);
            br[x]++;
            br[y+1]--;
        }
        for(ll i=1;i<=2*k+1;i++){
            br[i]+=br[i-1];
        }
        ll ans=LLONG_MAX;
        for(ll i=2;i<=2*k;i++){
            ll cnt=(br[i]-ar[i])+((n/2-br[i])*2);
            //cout<<i<<" = "<<br[i]<<" "<<ar[i]<<" "<<cnt<<endl;
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}
