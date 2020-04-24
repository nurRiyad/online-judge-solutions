#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='1') cnt+=a;
        if(s[i]=='2') cnt+=b;
        if(s[i]=='3') cnt+=c;
        if(s[i]=='4') cnt+=d;
    }
    cout<<cnt<<endl;
    return 0;
}

