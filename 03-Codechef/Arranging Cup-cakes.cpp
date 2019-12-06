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
        ll mn=INT_MAX;
        for(ll i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ll x=abs(n/i-i);
                mn=min(mn,x);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
