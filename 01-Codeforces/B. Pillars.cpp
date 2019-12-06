#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    ll mxindex,mx=INT_MIN;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(mx<v[i]){
            mxindex=i;
            mx=v[i];
        }
    }
    ll mx1=mx;
    //cout<<mxindex<<" "<<mx<<endl;
    for(ll i=mxindex+1;i<v.size();i++){
        if(v[i]>=mx){
            cout<<"NO"<<endl;
            return 0;
        }
        else mx=v[i];
    }
    for(ll i=mxindex-1;i>=0;i--){
        if(v[i]>=mx1){
            cout<<"NO"<<endl;
            //cout<<i<<endl;
            return 0;
        }
        else mx1=v[i];
        }
    cout<<"YES"<<endl;
    return 0;
}
