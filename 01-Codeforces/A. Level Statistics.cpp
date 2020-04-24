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
        vector<pair<ll,ll> >vp;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            vp.push_back({a,b});
        }
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(vp[i].first<vp[i].second){
                flag=false;
                break;
            }
            if(i!=0){
                ll dif1=vp[i].first-vp[i-1].first;
                ll dif2=vp[i].second-vp[i-1].second;
                if(dif1<0||dif2<0){
                    flag=false;
                    break;
                }
                if(dif2>dif1){
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
