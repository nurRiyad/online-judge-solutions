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
        ll n,m,q,cnt=0;
        cin>>n>>m>>q;
        int row[n+2],colum[m+2];
        memset(row,0,sizeof(row));
        memset(colum,0,sizeof(colum));
        while(q--){
            ll x,y;
            cin>>x>>y;
            row[x]++;
            colum[y]++;
        }
        ll oddcm=0,evencm=0;
        for(ll i=1;i<=m;i++){
            if(colum[i]%2==1) oddcm++;
            else if(colum[i]%2==0) evencm++;
        }
        for(ll i=1;i<=n;i++){
            if(row[i]%2==0){
                cnt+=oddcm;
            }
            else{
                cnt+=evencm;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
