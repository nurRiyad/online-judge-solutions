#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b;
    ll ar[10000],br[10000];
    memset(ar,0,sizeof(ar));
    memset(br,0,sizeof(br));
    cin>>a;
    vector<ll> v(a);
    for(ll i=0;i<a;i++) {cin>>v[i]; ar[v[i]]=1;}
    cin>>b;
    vector<ll> r(b);
    for(ll i=0;i<b;i++) {cin>>r[i]; br[r[i]]=1;}

    for(ll i=0;i<a;i++){
        for(ll j=0;j<b;j++){
            ll x=v[i]+r[j];
            if(ar[x]!=1&&br[x]!=1){
                cout<<v[i]<<" "<<r[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
