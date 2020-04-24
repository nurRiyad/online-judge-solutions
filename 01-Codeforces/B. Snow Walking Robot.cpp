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
        string s;
        cin>>s;
        ll l=0,r=0,u=0,d=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='L') l++;
            if(s[i]=='R') r++;
            if(s[i]=='U') u++;
            if(s[i]=='D') d++;
        }
        if(l!=0&&r!=0&&d!=0&&u!=0){
            ll x=min(l,r);
            ll y=min(u,d);
            ll ans=(x*2)+(y*2);
            cout<<ans<<endl;
            for(ll i=0;i<x;i++) cout<<'R';
            for(ll i=0;i<y;i++) cout<<'D';
            for(ll i=0;i<x;i++) cout<<'L';
            for(ll i=0;i<y;i++) cout<<'U';
            cout<<endl;
            continue;

        }
        if((l==0||r==0)&&d!=0&&u!=0){
            cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }
        if((d==0||u==0)&&l!=0&&r!=0){
            cout<<2<<endl;
            cout<<"LR"<<endl;
            continue;
        }
        cout<<0<<endl;
        cout<<endl;
    }
    return 0;
}

