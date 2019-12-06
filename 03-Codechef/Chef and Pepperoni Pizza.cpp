#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        vector<pair<ll,ll> > vp;
        ll n,lsum=0,rsum=0;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll lft=0,rht=0;
            string s;
            cin>> s;
            for(ll i=0;i<n;i++){
                if(i<(n/2)){
                    if(s[i]=='1') lft++;
                }
                else{
                    if(s[i]=='1') rht++;
                }
            }
            lsum+=lft;
            rsum+=rht;
            vp.push_back(make_pair(lft,rht));
        }
        ll fd=abs(lsum-rsum);
        for(ll i=0;i<vp.size();i++){
            ll x=lsum-vp[i].first+vp[i].second;
            ll y=rsum-vp[i].second+vp[i].first;
            ll d=abs(x-y);
            fd=min(d,fd);
        }
        cout<<fd<<endl;
    }
    return 0;
}
