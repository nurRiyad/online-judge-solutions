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
        string s;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        if(n==2){
            cout<<"23"<<endl;
            continue;
        }
        if(n==3){
            cout<<"223"<<endl;
            continue;
        }
        ll x=((n-1)*2)+3;
        if(x%3==0){
            for(ll i=0;i<n-2;i++) cout<<2;
            cout<<"33"<<endl;
            continue;
        }
        else{
            for(ll i=0;i<n-1;i++) cout<<2;
            cout<<3<<endl;
        }
    }
    return 0;
}
