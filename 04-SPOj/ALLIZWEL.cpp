#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ar[200][200];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        memset(ar,0,sizeof(ar));
        ll n,m;
        cin>>n>>m;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
    }

    return 0;
}
