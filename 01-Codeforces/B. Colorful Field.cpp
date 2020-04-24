#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 40004
ll row[mx+10];
ll col[mx+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<ll> v;
    map<ll,ll> mp;
    for(ll i=0;i<c;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back(((x-1)*b)+y);
        mp[((x-1)*b)+y]++;
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<d;i++){
        ll x,y;
        cin>>x>>y;
        ll ind=((x-1)*b)+y;
        if(mp.count(ind)){
            cout<<"Waste"<<endl;
            continue;
        }
        else{
            ll x=lower_bound(v.begin(),v.end(),ind)-v.begin();
            //cout<<x<<"=x & ind= "<<ind<<endl;
            x=ind-x;
            if(x%3==0) cout<<"Grapes"<<endl;
            else if(x%3==1) cout<<"Carrots"<<endl;
            else cout<<"Kiwis"<<endl;
        }
    }
    return 0;
}
