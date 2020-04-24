#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,t,k,d;
    cin>>n>>t>>k>>d;
    ll x=ceil(double(n)/k);
    ll tm=t*x;
    if(tm<=d) cout<<"NO"<<endl;
    else{
        ll y=tm-d;
        if(y>t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

