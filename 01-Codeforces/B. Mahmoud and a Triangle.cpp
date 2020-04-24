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
    sort(v.begin(),v.end());
    for(ll i=0;i<n-2;i++){
        if(v[i]+v[i+1]>v[i+2]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
