#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    while(n--){
        ll a;
        cin>>a;
        vector<ll> va(a),vb(a);
        for(ll i=0;i<a;i++) cin>>va[i];
        for(ll i=0;i<a;i++) cin>>vb[i];
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
        ll sum=0;
        for(ll i=0;i<a;i++){
            ll x=va[i]*vb[i];
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
