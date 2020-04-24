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
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            if(mp.find(i+1-v[i])==mp.end()){
                mp[i+1-v[i]]++;
            }
            else{
                for(ll j=i;j<n;j++){
                    if(mp.find(i+1-v[j])==mp.end()){
                        swap(v[i],v[j]);
                    }
                }
            }
        }
        for(ll i=0;i<n;i++){
            if(i==n-1) cout<<v[i]<<endl;
            else cout<<v[i]<<" ";
        }
    }
    return 0;
}
