#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 10000
ll ar[mx+2];

bool dp(ll n,ll m){
    if(n<0) return false;
    ll a=m-ar[n];
    ll b=m;
    //cout<<a<<" "<<b<<endl;
    if(a==0||b==0) return true;
    return dp(n-1,a)||dp(n-1,b);
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
        ll n,m;
        cin>>n>>m;
        for(ll i=0;i<n;i++){
            cin>>ar[i];
        }
        bool x= dp(n-1,m);
        if(x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
