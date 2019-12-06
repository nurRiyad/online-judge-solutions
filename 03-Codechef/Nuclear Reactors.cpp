#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,n,k;
    cin>>a>>n>>k;
    for(ll i=0;i<n;i++){
        ll x=a%(n+1);
        a=a/(n+1);
        if(i!=(n-1)) cout<<x<<" ";
        else cout<<x<<endl;
    }
    return 0;
}
