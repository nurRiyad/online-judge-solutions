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
        ll ar[n+2];
        vector<ll> r;
        map<ll,ll> mp;
        memset(ar,0,sizeof(ar));
        for(ll i=1;i<=n;i++){
            ll k;
            cin>>k;
            bool flag=true;
            while(k--){
                ll a;
                cin>>a;
                mp[a]=i;
                if(ar[a]==0&&flag==true){
                    ar[a]=1;
                    flag=false;
                }
            }
            if(flag){
                r.push_back(i);
            }

        }
        if(r.size()==0){
            cout<<"OPTIMAL"<<endl;
            continue;
        }
        bool fb=false;
        for(ll i=0;i<r.size();i++){
            ll x=r[i];
            for(ll j=1;j<=n;j++){
                if(ar[j]==0&&mp[j]!=x){
                    fb=true;
                    cout<<"IMPROVE"<<endl;
                    cout<<x<<" "<<j<<endl;
                    break;
                }
            }
            if(fb) break;
        }
        if(fb==false) cout<<"OPTIMAL"<<endl;
    }
    return 0;
}
