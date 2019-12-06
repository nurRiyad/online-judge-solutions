#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    ll x=0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            x=__gcd(x,i);
           // cout<<x<<endl;
            x=__gcd(x,n/i);
           // cout<<x<<endl;
        }
    }
    //cout<<x<<endl;
    if(x==0) x=n;
    cout<<x<<endl;

    return 0;
}

