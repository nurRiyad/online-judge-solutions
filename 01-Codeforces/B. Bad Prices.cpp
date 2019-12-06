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
        ll n,cnt=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        ll maxp=v[v.size()-1];
        for(ll i=v.size()-2;i>=0;i--){
            if(v[i]>maxp) cnt++;
            else{
                maxp=v[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
