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
        ll n,mx=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
             cin>>v[i];
             mx=max(mx,v[i]);
        }
        vector<ll> r1,r2,s1,s2,p1,p2;
        //for mx and n-mx
        for(ll i=0;i<mx;i++){
            r1.push_back(v[i]);
        }
        for(ll i=mx;i<n;i++){
            r2.push_back(v[i]);
        }
        bool fg1=true,fg2=true;
        sort(r1.begin(),r1.end());
        for(ll i=0,j=1;i<r1.size();i++,j++){
            if(r1[i]!=j){
                fg1=false;
                break;
            }
        }
        sort(r2.begin(),r2.end());
        for(ll i=0,j=1;i<r2.size();i++,j++){
            if(r2[i]!=j){
                fg2=false;
                break;
            }
        }
        //for n-mx,mx
        bool fg3=true,fg4=true;
        for(ll i=0;i<(n-mx);i++){
            s1.push_back(v[i]);
        }
        for(ll i=n-mx;i<n;i++){
            s2.push_back(v[i]);
        }
        sort(s1.begin(),s1.end());
        for(ll i=0,j=1;i<s1.size();i++,j++){
            if(s1[i]!=j){
                fg3=false;
                break;
            }
        }
        sort(s2.begin(),s2.end());
        for(ll i=0,j=1;i<s2.size();i++,j++){
            if(s2[i]!=j){
                fg4=false;
                break;
            }
        }
       /* //for mx and mx;
        for(ll i=0;i<mx;i++){
            p1.push_back(v[i]);
        }
        for(ll i=0,j=n-1;i<mx;i++,j--){
            p2.push_back(v[i]);
        }
        sort(p1.begin(),p1.end());
        sort(p1.begin().p2.end());
        bool flag=true;
        for(ll i=0;i<p1.size();i++){
            if(p1[i]!=p2[i]){
                flag=false;
                break;
            }
        }
        if(flag) ans.push_back({})*/
        vector<pair<ll,ll> > ans;
        if(fg1&&fg2) ans.push_back({mx,n-mx});
        if(fg3&&fg4){
            if(mx!=n-mx) ans.push_back({n-mx,mx});
        }
        if(ans.size()==0){
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<ans.size()<<endl;
            for(ll i=0;i<ans.size();i++){
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }
    }
    return 0;
}
