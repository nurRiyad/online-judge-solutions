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

        if(n==0){
            cout<<0<<endl;
            continue;
        }

        sort(v.begin(),v.end());

        ll sum=0,presum=0,prev=v[0];
        for(ll i=1;i<v.size();i++){
            ll x=v[i]+presum;
            ll dif=x-prev;
            //cout<<dif<<endl;
            prev=x;
            presum+=dif;
        }

        cout<<presum<<endl;
    }
    return 0;
}
