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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll target;
    cin>>target;
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++){
        for(ll j=i+1;j<v.size();j++){
            for(ll k=j+1;k<v.size();k++){
                ll sum=v[i]+v[j]+v[k];
                if(sum==target){
                    cout<<v[i]<<", "<<v[j]<<" and "<<v[k]<<endl;
                }
            }
        }
    }
    return 0;
}

