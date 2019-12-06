#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1e5

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mxx=mx,mnx=-mx,mxy=mx,mny=-mx;
        while(n--){
            ll x,y,f1,f2,f3,f4;
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(!f1) mnx=max(mnx,x);
            if(!f2) mxy=min(mxy,y);
            if(!f3) mxx=min(mxx,x);
            if(!f4) mny=max(mny,y);
        }
        if(mnx>mxx||mny>mxy){
            cout<<0<<endl;
        }
        else cout<<1<<" "<<mnx<<" "<<mny<<endl;
    }
    return 0;
}
