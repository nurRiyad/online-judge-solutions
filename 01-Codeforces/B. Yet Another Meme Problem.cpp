#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
//1 10001
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll sum=0;
        for(ll i=9;i<=b;){
            //cout<<i<<endl;
            sum+=a;
            i=(i*10)+9;
        }
        cout<<sum<<endl;
    }
    return 0;
}

