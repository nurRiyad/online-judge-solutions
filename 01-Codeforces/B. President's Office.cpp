#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m;
    char p;
    cin>>n>>m>>p;
    char ar[n+1][m+1];
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>ar[i][j];
        }
    }
    map<char,ll> mp;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(ar[i][j]==p){
                if(i+1<=n){
                   if(ar[i+1][j]!=p&&ar[i+1][j]!='.') mp[ar[i+1][j]]++;
                }
                if(j+1<=m){
                   if(ar[i][j+1]!=p&&ar[i][j+1]!='.') mp[ar[i][j+1]]++;
                }
                if(i-1>=1){
                    if(ar[i-1][j]!=p&&ar[i-1][j]!='.') mp[ar[i-1][j]]++;
                }
                if(j-1>=1){
                    if(ar[i][j-1]!=p&&ar[i][j-1]!='.') mp[ar[i][j-1]]++;
                }
            }
        }
    }
//    for(auto it:mp){
//        cout<<it.first<<" "<<it.second<<endl;
//    }
    cout<<mp.size()<<endl;
    return 0;
}
