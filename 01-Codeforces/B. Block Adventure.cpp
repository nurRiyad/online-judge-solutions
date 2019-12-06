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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> v(n+2);
        for(ll i=1;i<=n;i++) cin>>v[i];

        bool flag=true;
        for(ll i=1;i<n;i++){
            if(v[i]>=v[i+1]){
                ll x=v[i+1]-k;
                x=max((ll)0,x);
                m+=v[i]-x;
            }
            else{
                v[i]=v[i]+m;
                if(v[i]>=v[i+1]-k){
                    ll x=v[i+1]-k;
                    x=max(x,(ll)0);
                    m=v[i]-x;

                }
                else{
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
    }
    return 0;
}
