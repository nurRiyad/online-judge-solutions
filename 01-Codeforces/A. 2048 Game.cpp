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
        ll ar[20000];
        memset(ar,0,sizeof(ar));
        bool ans=false;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a==2048) ans=true;
            if(a<6000) ar[a]++;
        }
        if(ans){
            cout<<"YES"<<endl;
            continue;
        }
        for(ll i=1;i<=3000;i++){
            if(ar[i]>0){
                ll x=ar[i]/2;
                ar[i*2]+=x;
            }
        }
        if(ar[2048]==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
