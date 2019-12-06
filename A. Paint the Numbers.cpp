#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,mx=-1;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll cnt=0;
    for(ll i=0;i<v.size();i++){
        ll x=v[i];
        if(x!=-1){
            for(ll j=i;j<v.size();j++){
                if(v[j]!=-1&&v[j]%x==0){
                    v[j]=-1;
                }
            }
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
