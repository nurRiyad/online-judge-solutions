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
        ll n;
        cin>>n;
        ll x=n/2;
        if(x%2==0){
            cout<<"YES"<<endl;
            vector<ll> v;
            for(ll i=0,j=2;i<x;i++,j+=2){
                v.pb(j);
            }
            for(ll i=0;i<x;i++){
                if(i<x/2){
                    v.pb(v[i]-1);
                }
                else{
                    v.pb(v[i]+1);
                }
            }
            for(ll i=0;i<v.size();i++){
                if(i==v.size()-1) cout<<v[i]<<endl;
                else cout<<v[i]<<" ";
            }
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
