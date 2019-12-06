#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    vector<ll> v;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum=a+b+c+d;
    if(sum%2==0){
        ll x=sum/2;
        if(x==a||x==b||x==c||x==d) cout<<"YES"<<endl;
        else if(x==a+b||x==a+c||x==a+d||x==b+c||x==b+d||x==c+d) cout<<"YES"<<endl;
        else if(x==(a+b+c)||x==(a+b+d)||x==(a+c+d)||x==(b+c+d)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
