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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll mx=0;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(ll i=0;i<n;i++){
        ll x=v[i];
        ll cnt1=0,cnt2=0;
        for(ll j=i;j<n-1;j++){
            if(v[j]>=v[j+1]) cnt1++;
            else break;
        }
        for(ll j=i;j>0;j--){
            if(v[j]>=v[j-1]) cnt2++;
            else break;
        }
        //cout<<cnt1<<" "<<cnt2<<endl;
        mx=max(mx,cnt1+cnt2+1);
    }
    cout<<mx<<endl;
    return 0;
}
