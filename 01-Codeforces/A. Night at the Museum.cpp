#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin>>s;
    ll x='a'-'a';
    ll ans=0;
    for(ll i=0;i<s.size();i++){
        ll y=s[i]-'a';
        ll d=abs(x-y);
        if(d>13) ans+=(26-d);
        else ans+=d;
        x=y;
    }
    cout<<ans<<endl;
    return 0;
}

