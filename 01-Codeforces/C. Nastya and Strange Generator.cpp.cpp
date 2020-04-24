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
        vector<ll> v(n);
        vector<pair<ll,ll> > vp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            vp.pb(mk(v[i],i));
        }
        ll ar[n+10];
        memset(ar,0,sizeof(ar));
        sort(vp.begin(),vp.end());
        bool flag=true;
        for(ll i=0;i<vp.size();i++){
            ll x=vp[i].second;
            ll cnt=vp[i].first;
            for(ll j=x;j<n;j++){
                if(ar[j]==0){
                    if(v[j]==cnt){
                        cnt++;
                        ar[j]=1;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
                else break;
            }
            if(flag==false) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
