#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,cnt=0;
    cin>>n;
    int ar[n+5][n+4];
    for(ll i=0;i<n;i+=4){
        for(ll j=0;j<n;j+=4){
            for(ll ii=i;ii<i+4;ii++){
                for(ll jj=j;jj<j+4;jj++){
                    ar[ii][jj]=cnt++;
                }
            }
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(j!=(n-1)) cout<<ar[i][j]<<" ";
            else cout<<ar[i][j];
        }
        cout<<endl;
    }
    return 0;
}
