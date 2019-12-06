#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll b,p,f,ans=0;
        cin>>b>>p>>f;
        ll h,c;
        cin>>h>>c;
        if(h>c){
            ll x=min(b/2,p);
            ans+=(x*h);
            b=b-(x*2);
            ll y=min(b/2,f);
            ans+=(y*c);
            //cout<<x<<" ==== "<<y<<endl;
        }
        else{
            ll x=min(b/2,f);
            ans+=(x*c);
            b=b-(x*2);
            ll y=min(b/2,p);
            ans+=(y*h);
            //cout<<x<<" ==== "<<y<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
