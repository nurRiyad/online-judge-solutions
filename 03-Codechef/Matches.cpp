#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isWin(ll a,ll b){
    if(a%b==0||b%a==0) return true;
    ll x=max(a,b)/min(a,b);
    bool y=isWin(min(a,b),max(a,b)-(min(a,b)*x));
    if(x>1) return true;
    else{
        y=!y;
        return y;
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
        ll n,m;
        cin>>n>>m;
        bool x=isWin(n,m);
        if(x) cout<<"Ari"<<endl;
        else cout<<"Rich"<<endl;
    }
    return 0;
}
