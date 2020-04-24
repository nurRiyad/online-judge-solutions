#include<bits/stdc++.h>
#define ll long long
using namespace std;

string fn(string a){
    string ns;
    ll x=0;
    for(ll i=0;i<a.size();i++){
        x+=a[i]-'0';
    }
    stringstream ss;
    ss<<x;
    ss>>ns;
    return ns;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin>>s;
    ll cnt=0;
    while(s.size()>1){
       s=fn(s);
       cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
