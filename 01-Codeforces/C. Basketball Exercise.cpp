#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100500
ll ab[mx][3];
ll ar[mx];
ll br[mx];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    //ll ab[n+10][n+10];
    //ll ar[n+1],br[n+1];
    for(ll i=1;i<=n;i++) cin>>ar[i];
    for(ll i=1;i<=n;i++) cin>>br[i];
    ab[1][1]=ar[1];
    ab[1][2]=br[1];
    for(ll i=2;i<=n;i++){
        ab[i][1]=max(ab[i-1][1],ab[i-1][2]+ar[i]);
        //cout<<i<<" "<<1<<"=="<<ab[i][1]<<endl;
        ab[i][2]=max(ab[i-1][2],ab[i-1][1]+br[i]);
        //cout<<i<<" "<<2<<"=="<<ab[i][2]<<endl;
    }
    cout<<max(ab[n][1],ab[n][2])<<endl;
    return 0;
}
