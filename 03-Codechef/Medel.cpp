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
        ll a;
        cin>>a;
        vector<ll> v(a);
        ll mx=INT_MIN,mn=INT_MAX,j,l;
        for(ll i=0;i<a;i++){
            cin>>v[i];
            if(v[i]>mx){
                mx=v[i];
                j=i;
            }
            if(v[i]<mn){
                mn=v[i];
                l=i;
            }
        }
        if(j<l) cout<<mx<<" "<<mn<<endl;
        else cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
