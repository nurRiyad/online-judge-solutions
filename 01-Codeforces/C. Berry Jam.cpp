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
        ll ans=0;
        map<string,pair<ll,ll> > mp;
        map<string,pair<ll,ll> >::iterator it;
        ll n,rr=0,bb=0;
        cin>>n;
        vector<ll> l(n);
        vector<ll> r(n);
        for(ll i=0;i<n;i++){
            cin>>l[i];
            if(l[i]==1) rr++;
            if(l[i]==2) bb++;
            ll d=abs(rr-bb);
            string ss,sa;
            if(rr>=bb) ss="b";
            else ss="r";
            stringstream ssa;
            ssa<<d;
            ssa>>sa;
            ss=ss+sa;
            mp[ss]=make_pair(rr,bb);

        }
        rr=0;bb=0;
        for(ll i=0;i<n;i++) cin>>r[i];
        reverse(r.begin(),r.end());
        for(ll i=0;i<r.size();i++){
            if(r[i]==1) rr++;
            else bb++;
            ll d=abs(rr-bb);
            string ss;
            if(bb>=rr) ss="r";
            else ss="b";
            string sa;
            stringstream sss;
            sss<<d;
            sss>>sa;
            ss=ss+sa;
            if(mp.find(ss)!=mp.end()){
                ll x=mp[ss].first;
                ll y=mp[ss].second;
                if((rr+x)==(bb+y)){
                   ll cnt=2*n-(2*(rr+x));
                  ans=max(ans,cnt);
                }

            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

