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
        ll a,b;
        cin>>a>>b;
        ll x=a-b;
        if(x==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
