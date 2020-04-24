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
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        ll ans=0,sum=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
            double avg=(double)sum/(double)(i+1);
            if(avg<x) break;
            else ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
