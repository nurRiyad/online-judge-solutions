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
        ll xr=0;
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            xr=xr^v[i];
            sum+=v[i];
        }
        //cout<<xr<<" "<<sum<<endl;
        if(xr*2==sum){
            cout<<0<<endl;
            cout<<endl;
            continue;
        }
        if(xr==0){
            cout<<1<<endl;
            cout<<sum<<endl;
            continue;
        }
        cout<<2<<endl;
        cout<<xr<<" "<<xr+sum<<endl;
    }
    return 0;
}

