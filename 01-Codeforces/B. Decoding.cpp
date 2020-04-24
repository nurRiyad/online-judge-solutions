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
    string s,a,b;
    cin>>s;
    for(ll i=0;i<s.size();i++){
        if(i%2==1) a+=s[i];
        else b+=s[i];
    }
    if(s.size()%2==1){
        reverse(a.begin(),a.end());
        cout<<a+b<<endl;
    }
    else{
         reverse(b.begin(),b.end());
         cout<<b+a<<endl;
    }
    return 0;
}
