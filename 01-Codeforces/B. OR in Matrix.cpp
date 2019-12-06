#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    int ar[n+1][m+1];
    int br[n+1][m+1];
    memset(br,0,sizeof(br));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ar[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int row=i;
            int colom=j;
            int flag=0;
            for(int k=1;k<=m;k++){
                if(ar[row][k]!=1){
                    br[i][j]=0;
                    flag=1;
                    break;
                }
            }
            for(int k=1;k<=n;k++){
                if(ar[k][colom]!=1){
                    br[i][j]=0;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                br[i][j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x=0;
            for(int k=1;k<=m;k++){
                x=x||br[i][k];
            }
            for(int k=1;k<=n;k++){
                x=x||br[k][j];
            }
            if(x!=ar[i][j]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==m) cout<<br[i][j];
            else cout<<br[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
