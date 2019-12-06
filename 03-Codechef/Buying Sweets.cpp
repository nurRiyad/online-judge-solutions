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
        ll n,x,sum=0;
        cin>>n>>x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) {cin>>v[i]; sum+=v[i];}
        sort(v.begin(),v.end());
        ll cnt=sum/x;
        sum=sum-v[0];
        if(sum/x==cnt) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}
