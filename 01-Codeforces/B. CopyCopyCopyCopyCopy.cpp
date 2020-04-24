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
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        cout<<mp.size()<<endl;

    }
    return 0;
}
