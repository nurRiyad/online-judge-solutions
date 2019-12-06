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

        ll inversion=0,linversion=0;
        for(ll i=0;i<v.size();i++){
            for(ll j=i+1;j<v.size();j++){
                if(v[i]>v[j]) inversion++;
            }
        }
        //cout<<inversion<<endl;

        for(ll i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]) linversion++;
        }
        //cout<<linversion<<endl;

        if(inversion==linversion) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
