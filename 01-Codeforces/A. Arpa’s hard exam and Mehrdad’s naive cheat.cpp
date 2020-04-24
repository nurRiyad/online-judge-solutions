#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a=1378;

ll bigmod(ll n,ll m){
    if(n==0) return 1%m;
    if(n==1) return a%m;
    else{
        ll b=((bigmod(n/2,m)%m)*(bigmod(n/2,m)%m))%m;
        if(n%2==1) b=((b%m)*(bigmod(1,m)%m))%m;
        return b;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    cout<<bigmod(n,10)<<endl;
    return 0;
}

