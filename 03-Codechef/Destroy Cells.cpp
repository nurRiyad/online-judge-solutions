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
        ll n,m;
        cin>>n>>m;
        ll k=n*m;
        ll r[(n*m)+5],c[(n*m)+5];
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));

        ll x=0,y=0;
        for(ll i=0;i<n;i++){
            for(ll j=1;j<=m;j++){
                r[++x]=(i*m)+j;
            }
        }

        for(ll i=1;i<=m;i++){
            for(ll j=0;j<n;j++){
                c[++y]=(j*m)+i;
            }
        }
        ll ar[(n*m)+10];
        memset(ar,0,sizeof(ar));

        for(ll i=1;i<=(k);i++){
            vector<ll> undo;
            //unordered_map<ll,ll> unmp;
            if(i==1){
                cout<<n*m<<" ";
                continue;
            }
            ll cnt=0;
            for(ll j=1;j<=n*m;j+=i){
                ll p=r[j];
                undo.push_back(p);
                ar[p]=1;
                cnt++;
            }
            for(ll j=1;j<=(n*m);j+=i){
                ll q=c[j];
                if(ar[q]==0){
                    cnt++;
                }
            }
            for(ll i=0;i<undo.size();i++){
                x=undo[i];
                ar[x]=0;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;

    }
    return 0;
}
