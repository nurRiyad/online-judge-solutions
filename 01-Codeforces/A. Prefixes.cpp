#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    string v;
    cin>>v;
    ll x=0;
    for(ll i=1;i<v.size();i+=2){
        if(v[i]==v[i-1]){
            x++;
            if(v[i]=='a') v[i]='b';
            else v[i]='a';
        }
    }
    cout<<x<<endl;
    cout<<v<<endl;
    return 0;
}
