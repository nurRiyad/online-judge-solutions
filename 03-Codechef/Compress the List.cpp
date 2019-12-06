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
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<v[0]<<endl;
            continue;
        }
        if(n==2){
            cout<<v[0]<<","<<v[1]<<endl;
            continue;
        }
        vector<pair<ll,ll> > vp;
        ll cnt=0;
        for(ll i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]-1) cnt++;
            else{
                ll x=v[i];
                ll y=v[i-cnt];
                vp.push_back(make_pair(x,y));
                cnt=0;
            }
        }
        ll lst=v.size()-1;
        if(cnt!=0){
            vp.push_back(make_pair(v[lst],v[lst-cnt]));
        }
        if(v[lst]!=v[lst-1]+1) vp.push_back(make_pair(v[lst],v[lst]));
        for(ll i=0;i<vp.size();i++){
            ll xx=abs(vp[i].first-vp[i].second);
            if(xx==0&&i!=vp.size()-1) cout<<vp[i].first<<",";
            else if(xx==0&&i==vp.size()-1) cout<<vp[i].first<<endl;
            else if(xx==1&&i!=vp.size()-1) cout<<vp[i].second<<","<<vp[i].first<<",";
            else if(xx==1&&i==vp.size()-1) cout<<vp[i].second<<","<<vp[i].first<<endl;
            else if(i!=vp.size()-1) cout<<vp[i].second<<"..."<<vp[i].first<<",";
            else cout<<vp[i].second<<"..."<<vp[i].first<<endl;
        }

    }
    return 0;
}

