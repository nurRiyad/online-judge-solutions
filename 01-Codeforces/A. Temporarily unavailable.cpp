#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define test cout<<"here"<<endl;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll x,y,c,r;
        cin>>x>>y>>c>>r;
        ll a=min(x,y);
        ll b=max(x,y);
        ll ax=c-r;
        ll bx=c+r;
        //cout<<"ax and bx is="<<ax<<" "<<bx<<endl;
        if(ax<=a&&bx>=b){
            cout<<0<<endl;
            continue;
        }
        if(ax<a&&bx<a || ax>b&&bx>b){
            cout<<abs(a-b)<<endl;
            continue;
        }
        if(ax>=a&&bx<=b){
            ll ans=(abs(a-b)+1)-(abs(ax-bx)+1);
            cout<<ans<<endl;
            continue;
        }
        if(ax<a&&bx<=b){
            ll ans=(abs(a-b)+1)-(abs(a-bx)+1);
            cout<<ans<<endl;
            continue;
        }
        if(ax>=a&&bx>b){
            ll ans=(abs(a-b)+1)-(abs(ax-b)+1);
            cout<<ans<<endl;
            continue;
        }
    }
    return 0;
}

