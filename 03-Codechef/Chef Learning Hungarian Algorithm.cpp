#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll ar[n][n],flag=0;
        memset(ar,0,sizeof(ar));
        vector<ll> row,col;
        for(ll i=0;i<n;i++){
            ll mn=INT_MAX;
            for(ll j=0;j<n;j++){
                cin>>ar[i][j];
                mn=min(ar[i][j],mn);
            }
            if(mn!=0) flag=1;
        }
        for(ll i=0;i<n;i++){
            ll mn=INT_MAX;
            for(ll j=0;j<n;j++){
                mn=min(ar[j][i],mn);
            }
            if(mn!=0) flag=1;
        }
        if(flag==1)  cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
