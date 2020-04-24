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
    bool flag=false;
    vector<pair<ll,ll> > vp;
    for(ll i=0;i<t;i++){
        ll a,b;
        cin>>a>>b;
        vp.push_back({a,b});
        if(a!=b){
            flag=true;
        }
    }
    if(flag){
        cout<<"rated"<<endl;
        return 0;
    }
    if(t==1){
        cout<<"maybe"<<endl;
        return 0;
    }
    for(ll i=1;i<t;i++){
        if(vp[i-1].first<vp[i].first){
            cout<<"unrated"<<endl;
            return 0;
        }
    }
    cout<<"maybe"<<endl;
    return 0;
}

