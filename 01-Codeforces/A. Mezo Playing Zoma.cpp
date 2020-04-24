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
    string s;
    cin>>s;
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='L') a++;
        else b++;
    }
    cout<<a+b+1<<endl;
    return 0;
}

