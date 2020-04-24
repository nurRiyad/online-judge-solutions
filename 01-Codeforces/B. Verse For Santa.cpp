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
        ll n,a,sum=0;
        cin>>n>>a;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum<=a){
            cout<<0<<endl;
            continue;
        }
        ll mx=0,sm=0;
        for(ll i=0;i<v.size();i++){
            sm+=v[i];
            mx=max(mx,v[i]);
            if(sm>a) break;
        }
        for(ll i=0;i<v.size();i++){
            if(v[i]==mx){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}

