#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll r,c;
    cin>>r>>c;
    if(r==1&&c==1){
        cout<<0<<endl;
        return 0;
    }
    if(r==1){
        ll cnt=1;
        for(ll i=1;i<=c;i++){
            if(i!=c) cout<<++cnt<<" ";
            else cout<<++cnt<<endl;
        }
        return 0;
    }
    if(c==1){
        ll cnt=1;
        for(ll i=1;i<=r;i++) cout<<++cnt<<endl;
        return 0;
    }
    for(ll i=1;i<=r;i++){
        for(ll j=1;j<=c;j++){
            if(j==c) cout<<i*(j+r)<<endl;
            else cout<<i*(j+r)<<" ";
        }
    }
    return 0;
}

