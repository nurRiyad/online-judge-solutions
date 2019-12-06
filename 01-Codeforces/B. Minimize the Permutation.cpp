#include<bits/stdc++.h>
#define ll long long
using namespace std;


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
        ll ar[n+5];
        ll br[n+5];
        memset(br,0,sizeof(br));
        memset(ar,0,sizeof(ar));
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            ar[v[i]]=i+1;
        }
        v.push_back(INT_MAX);
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(ll i=1;i<n;i++){
            ll x=ar[i]-1;
            //cout<<x<<endl;
            for(ll j=x-1;j>=0&&br[j]==0;j--){
                if(v[j]>v[j+1]) swap(v[j],v[j+1]);
                br[j]=1;
            }
        }

        for(ll i=0;i<n-1;i++) cout<<v[i]<<" ";
        cout<<v[n-1]<<endl;
    }
    return 0;
}
