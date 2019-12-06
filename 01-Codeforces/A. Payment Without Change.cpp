#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);a
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        if((a*n)+b<s) cout<<"NO"<<endl;
        else{
            ll x=s%n;
            if(x<=b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
