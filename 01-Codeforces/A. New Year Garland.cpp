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
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=max(a,max(b,c));
        ll y=min(a,min(b,c));
        ll z=(a+b+c)-y-x;
        if(x>(y+z+1)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }
    return 0;
}

