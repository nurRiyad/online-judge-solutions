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
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll mn=INT_MAX;
        for(ll i=0;i<v.size()-1;i++){
            ll d=abs(v[i]-v[i+1]);
            mn=min(mn,d);
        }
        cout<<mn<<endl;
    }
    return 0;
}
