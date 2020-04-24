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
    vector<ll> v(n),r(n),c;
    for(ll i=0;i<n;i++) v[i]=i;
    for(ll i=0;i<n-1;i++) r[i]=i+1;
    r[n-1]=0;
    map<ll,ll> mp;
    bool flag=true;
    for(ll i=0;i<n;i++){
        ll x=(v[i]+r[i])%n;
        //cout<<x<<endl;
        if(mp.count(x)){
            flag=false;
            break;
        }
        else{
             mp[x]++;
             c.push_back(x);
        }
    }
    if(flag){
        for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
        for(ll i=0;i<n;i++) cout<<r[i]<<" ";
        cout<<endl;
        for(ll i=0;i<n;i++) cout<<c[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
