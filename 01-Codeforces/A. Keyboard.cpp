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
    ll x;
    if(s=="R") x=-1;
    else x=1;
    string ss;
    cin>>ss;
    string a="qwertyuiop";
    string b="asdfghjkl;";
    string c="zxcvbnm,./";
    string ans;
    for(ll i=0;i<ss.size();i++){
        for(ll j=0;j<a.size();j++){
            if(ss[i]==a[j]) ans.push_back(a[j+x]);
        }
        for(ll j=0;j<b.size();j++){
            if(ss[i]==b[j]) ans.push_back(b[j+x]);
        }
        for(ll j=0;j<c.size();j++){
            if(ss[i]==c[j]) ans.push_back(c[j+x]);
        }
    }
    cout<<ans<<endl;
    return 0;
}

