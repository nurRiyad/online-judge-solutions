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
    while(cin>>t){
        if(t==0) return 0;
        vector<ll> v;
        for(ll i=0;i<t;i++){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        ll mx=INT_MIN,x=0;
        for(ll i=0;i<t;i++){
            x=x+v[i];
            if(x>mx) mx=x;
            if(x<0) x=0;

        }
        if(mx<=0) cout<<"Losing streak."<<endl;
        else cout<<"The maximum winning streak is "<<mx<<"."<<endl;
    }
    return 0;
}

