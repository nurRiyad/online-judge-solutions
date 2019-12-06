#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
ll n,total;
ll ar[888][99999];

ll dp(ll i,ll a,ll b){
    if(ar[i][a]!=-1) return ar[i][a];
    if(i>=(n)){
        return abs(a-b);
    }
    else{
        ll x=dp(i+1,a+v[i],b);
        ll y=dp(i+1,a,b+v[i]);
        ll xx=min(x,y);
        return ar[i][a]=xx;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        memset(ar,-1,sizeof(ar));
        total=0;
        v.clear();
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            total+=a;
            v.push_back(a);
        }
        ll mincst=dp(0,0,0);
        cout<<mincst<<endl;

    }
    return 0;
}

