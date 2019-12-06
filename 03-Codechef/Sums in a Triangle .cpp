#include<bits/stdc++.h>
using namespace std;
int ar[1001][1001];
int ans[1001][1001];

int maxsum(int m,int i,int j){
    if(i==m||j==m){
        if(ans[i][j]==-1){
            ans[i][j]=ar[i][j];
            return ans[i][j];
        }
        else return ans[i][j];
    }
    else{
        if(ans[i][j]==-1){
            ar[i][j]+=max(maxsum(m,i+1,j),maxsum(m,i+1,j+1));
            ans[i][j]=ar[i][j];
            return ans[i][j];
        }
        else return ans[i][j];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        memset(ar,0,sizeof(ar));
        memset(ans,-1,sizeof(ans));
        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){
                cin>>ar[i][j];
            }
        }
        m--;
        cout<<maxsum(m,0,0)<<endl;
    }
    return 0;
}
