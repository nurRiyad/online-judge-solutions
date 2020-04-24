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
        ll ar[n+100];
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<n;i++){
            if(i==0) ar[i+1]=0;
            else if(i==n-1) ar[i+1]=0;
            else{
                if(v[i]>v[i-1]&&v[i]>v[i+1]) ar[i+1]++;
            }
        }
        for(ll i=1;i<=n+1;i++){
            ar[i]+=ar[i-1];
        }
        //for(ll i=1;i<=n;i++) cout<<ar[i]<<" ";
        //cout<<endl;
        ll mx=0,l=1;
        for(ll i=1;i<=n-k+1;i++){
            ll peak=ar[i+k-2]-ar[i];
            if(peak>mx){
                //cout<<"here="<<i<<endl;
                mx=peak;
                l=i;
            }
        }
        cout<<mx+1<<" "<<l<<endl;
        //if(mx>0) cout<<mx+1<<" "<<l<<endl;
        //else cout<<0<<" "<<1<<endl;
    }
    return 0;
}
