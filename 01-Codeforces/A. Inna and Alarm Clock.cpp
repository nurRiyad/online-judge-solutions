#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,ar[101][101];
    memset(ar,0,sizeof(ar));
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ar[a][b]=1;
    }
    int row=0,colom=0;
    for(int i=0;i<101;i++){
        int flag=0;
        for(int j=0;j<101;j++){
            if(ar[i][j]==1){
                flag=1;
                break;
            }
        }
        if(flag) row++;
    }
    //cout<<row<<endl;
    for(int i=0;i<=100;i++){
        int flag=0;
        for(int j=0;j<=100;j++){
            if(ar[j][i]==1){
                flag=1;
                break;
            }
        }
        if(flag) colom++;
    }
    //cout<<colom<<endl;
    cout<<min(row,colom)<<endl;
    return 0;
}
