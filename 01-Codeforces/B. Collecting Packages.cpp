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
        vector<pair<ll,ll> > vp;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            vp.push_back(make_pair(a,b));
        }
        string s;
        sort(vp.begin(),vp.end());
        ll x=0,y=0;
        bool flag=true;
        for(ll i=0;i<vp.size();i++){
            if(vp[i].first>=x&&vp[i].second>=y){
                for(ll j=0;j<abs(vp[i].first-x);j++) s.push_back('R');
                for(ll j=0;j<abs(vp[i].second-y);j++) s.push_back('U');
                x=vp[i].first;
                y=vp[i].second;
                //cout<<x<<" "<<y<<" "<<s<<endl;

            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

