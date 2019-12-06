#include<bits/stdc++.h>
using namespace std;
int n,m;
int ar[100][100];
int br[100][100];

bool ck(int i,int j, int k){
    if(k==1){
        if(j+1<m){
            if(ar[i][j]>=ar[i][j+1]) return false;
        }
        if(j-1>=0){
            if(ar[i][j]<=ar[i][j-1]) return false;
        }
        if(i-1>=0){
            if(ar[i][j]<=ar[i-1][j]) return false;
        }
        if(i+1<n){
            if(ar[i][j]>=ar[i+1][j]) return false;
        }
        return true;
    }
    else{
        if(j+1<m){
            if(br[i][j]>=br[i][j+1]) return false;
        }
        if(j-1>=0){
            if(br[i][j]<=br[i][j-1]) return false;
        }
        if(i-1>=0){
            if(br[i][j]<=br[i-1][j]) return false;
        }
        if(i+1<n){
            if(br[i][j]>=br[i+1][j]) return false;
        }
        return true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    memset(ar,0,sizeof(ar));
    memset(br,0,sizeof(br));
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>br[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x=ar[i][j];
            int y=br[i][j];
            ar[i][j]=max(x,y);
            br[i][j]=min(x,y);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ck(i,j,1)==0||ck(i,j,2)==0){
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    cout<<"Possible"<<endl;
    return 0;
}
