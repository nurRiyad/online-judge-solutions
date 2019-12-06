#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,e,d;
    cin>>n>>e>>d;
    vector<ll> dd{1,2,5,10,20,50,100}, ee{5,10,20,50,100,200};

    ll mn=INT_MAX,y;
    for(ll i=0;i<dd.size();i++){
        ll x=(dd[i]*d);
        if(x<=n){
            y=n-x;
            mn=min(mn,y);
        }
    }
    for(ll i=0;i<ee.size();i++){
        ll x=ee[i]*e;
        if(x<=mn){
            y=mn-x;
            mn=min(mn,y);
        }
    }
    cout<<"riyad"<<endl;
    ll mn1=INT_MAX,z;
    for(ll i=0;i<ee.size();i++){
        ll x=ee[i]*e;
        if(x<=n){
            z=n-x;
            mn1=min(mn1,z);
        }
    }
    for(ll i=0;i<dd.size();i++){
        ll x=dd[i]*d;
        if(x<=mn1){
            z=mn1-z;
            mn1=min(mn1,z);
        }
    }
    cout<<"riyad"<<endl;
    cout<<min(mn1,mn)<<endl;
    return 0;
}
