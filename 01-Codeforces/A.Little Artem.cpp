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
        ll n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                if(i==1&&j==1){
                    cout<<"W";
                }
                else cout<<"B";
            }cout<<endl;
        }
    }
    return 0;
}
