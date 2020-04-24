#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
    if(a==0) return b;
    else gcd(b%a,a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b;
    cin>>a>>b;
    ll x=max(a,b);
    ll y=(6-x)+1;
    cout<<y/gcd(y,6)<<"/"<<6/gcd(y,6)<<endl;
    return 0;
}
