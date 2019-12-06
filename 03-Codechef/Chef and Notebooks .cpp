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
    while(t--){
        ll x,y,k,n;
        cin>>x>>y>>k>>n;
        ll pageneed=x-y;
        ll moneyelft=k;
        bool ans=false;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            if(a>=pageneed&&moneyelft>=b) ans=true;
        }
        if(ans) cout<<"LuckyChef"<<endl;
        else cout<<"UnluckyChef"<<endl;
    }
    return 0;
}
