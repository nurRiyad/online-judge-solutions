#include<bits/stdc++.h>
#define ll long long
#define mx 100009
using namespace std;
ll ar[mx+10];
ll br[mx+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n),r(m);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            ar[v[i]]=i;
        }
        for(ll i=0;i<m;i++){
            cin>>r[i];
        }
        ll ans=0;
        ll mxin=-1;
        for(ll i=0;i<r.size();i++){
            ll x=r[i];
            ll ind=ar[x];
            if(ind<mxin){
                ans+=1;
            }
            else{
                ll above=ind-i;
                ll cn=(2*above)+1;
                ans+=cn;
                mxin=ind;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

