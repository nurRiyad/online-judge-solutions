#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 10009
ll ar[mx][mx];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(i*j>n) break;
            if(ar[i][j]==1||ar[j][i]==1) continue;
            else{
                cnt++;
                ar[i][j]=1;
                ar[j][i]=1;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
