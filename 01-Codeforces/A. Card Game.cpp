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
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll> v(b),r(c);
        for(ll i=0;i<b;i++){
            cin>>v[i];
        }
        for(ll i=0;i<c;i++){
            cin>>r[i];
        }
        sort(v.rbegin(),v.rend());
        sort(r.rbegin(),r.rend());
        if(v[0]>r[0]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

