#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mk  make_pair
#define pb  push_back
#define mx 1000000099

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll s=1,n=1;
    vector<ll> v;
    //v.pb(1);
    while(s<mx){
        s+=(n*2);
        n=n*2;
        v.pb(s);
    }
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        for(ll i=0;i<v.size();i++){
            if(x%v[i]==0){
                cout<<x/v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
