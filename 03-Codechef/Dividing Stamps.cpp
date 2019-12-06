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
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=x;
    }
    ll y=n*(n+1);
    y/=2;
    if(y==sum){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
