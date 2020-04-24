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
        ll n;
        cin>>n;
        ll x=n-15;
        if(x<0){
            cout<<"NO"<<endl;
            continue;
        }
        ll y=x%14;
        if(y<=5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

