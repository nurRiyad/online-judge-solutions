#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        ll n,e;
        cin>>n>>e;
        vector<ll> v[n+10];
        for(ll i=1;i<=e;i++){
            ll a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        if(e%2==0){
            cout<<0<<endl;
            for(ll i=0;i<n-1;i++) cout<<1<<" ";
            cout<<1<<endl;
        }
        else{
            ll ar[n+10];
            for(ll i=1;i<=n;i++) ar[i]=1;
            cout<<2<<endl;
            for(ll i=1;i<=n;i++){
                ll x=v[i].size();
                if(x%2==1){
                    ar[i]=2;
                    break;
                }
            }
            for(ll i=1;i<=n-1;i++) cout<<ar[i]<<" ";
            cout<<ar[n]<<endl;

        }

    }
    return 0;
}
