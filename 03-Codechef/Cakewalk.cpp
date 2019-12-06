#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool dp(ll a){
    if(a==1) return true;
    bool x=false,y=false;
    if(a%10==0) x=dp(a/10);
    if(a%20==0) y=dp(a/20);
    if(x||y) return true;a
    else return false;
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
        ll a;
        cin>>a;
        bool ans=dp(a);
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
