#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fn(ll t){
    ll s=0;
    while(t>0){
        s++;
        t=t/2;
    }
    return s;
}

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
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        for(ll i=1;i<n;i++){
            if(v[i-1]<=v[i]) continue;
            else{
                ll t=fn(v[i-1]-v[i]);
                ans=max(ans,t);
                v[i]=v[i-1];
            }
            //cout<<"hrere="<<v[i]<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
