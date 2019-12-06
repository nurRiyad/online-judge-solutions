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
        ll a,b,k;
        cin>>a>>b>>k;
        ll x=k%3;
        if(x==0) cout<<a<<endl;
        else if(x==1) cout<<b<<endl;
        else cout<< ((a) ^ (b)) <<endl;

    }
    return 0;
}
