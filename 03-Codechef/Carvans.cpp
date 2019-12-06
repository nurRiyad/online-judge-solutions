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
        ll cnt=1;
        ll mx_speed=v[0];
        for(ll i=1;i<v.size();i++){
            if(v[i]<mx_speed){
                 cnt++;
                 mx_speed=v[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
