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
        ll a;
        cin>>a;
        vector<ll> v(a),r;
        for(ll i=0;i<a;i++) cin>>v[i];

        for(ll i=0;i<v.size();i++){
            ll x=v[i],cnt=0;
            for(ll j=i+1;j<v.size();j++){
                if(v[j]>x) cnt++;
            }
            r.push_back(cnt);
        }
        for(ll i=0;i<r.size()-1;i++) cout<<r[i]<<" ";
        cout<<r[r.size()-1]<<endl;
    }
    return 0;
}
