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
        char ar[12][12];
        for(ll i=1;i<=9;i++){
            for(ll j=1;j<=9;j++){
                cin>>ar[i][j];
            }
        }
        ar[1][1]=ar[2][1];
        ar[4][2]=ar[5][2];
        ar[7][3]=ar[8][3];
        ar[2][4]=ar[3][4];
        ar[5][5]=ar[6][5];
        ar[8][6]=ar[9][6];
        ar[3][7]=ar[2][7];
        ar[6][8]=ar[5][8];
        ar[9][9]=ar[8][9];
        for(ll i=1;i<=9;i++){
            for(ll j=1;j<=9;j++){
                cout<<ar[i][j];
            }cout<<endl;
        }
    }
    return 0;
}
