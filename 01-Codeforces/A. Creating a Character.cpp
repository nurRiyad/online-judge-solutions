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
        ll a,b,e;
        cin>>a>>b>>e;
        ll hi=a+e,lo=b;
        if(hi<=lo){
            cout<<0<<endl;
        }
        else{
            ll x=(hi-lo+1)/2;
            cout<<x<<endl;
        }
    }
    return 0;
}
