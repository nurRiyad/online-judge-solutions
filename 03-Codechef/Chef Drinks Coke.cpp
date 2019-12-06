#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k,l,r;
        vector<ll> v;
        cin>>n>>m>>k>>l>>r;
        while(n--){
            ll c,p,tem;
            cin>>c>>p;
            if(c<k){
                tem=min(k,c+m);
            }
            else tem=max(k,c-m);
            if(tem>=l&&tem<=r) v.push_back(p);
        }
        sort(v.begin(),v.end());
        if(v.size()==0) cout<<-1<<endl;
        else cout<<v[0]<<endl;
    }
    return 0;
}
