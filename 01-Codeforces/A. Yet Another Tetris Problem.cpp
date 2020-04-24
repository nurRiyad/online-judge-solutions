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
        ll n,od=0,ev=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) ev++;
            else od++;
        }
        if(od==0||ev==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
