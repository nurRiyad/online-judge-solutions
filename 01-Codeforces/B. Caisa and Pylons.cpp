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
    vector<ll> v(n+1);
    v[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    ll cnt=0,p=0;
    for(ll i=0;i<n;i++){
        ll x=v[i]-v[i+1];
        p+=x;
        if(p<0){
            cnt+=abs(p);
            p=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
