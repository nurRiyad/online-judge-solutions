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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll mx=max(a,max(b,c));
        ll need=(mx-a)+(mx-b)+(mx-c);
        if(need>d){
            cout<<"NO"<<endl;
        }
        else{
            ll x=d-need;
            if(x%3==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}

