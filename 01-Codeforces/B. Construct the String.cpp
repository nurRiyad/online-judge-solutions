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
        ll n,a,b,c;
        cin>>n>>a>>b;
        ll x=n-a;
        string s;
        for(ll i=0,j=1;i<a;i++){
            s+='a'+(j-1);
            if(j<b) j++;
        }
        //cout<<"here="<<s<<endl;
        for(ll i=0;i<x;i++){
            s.push_back(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
