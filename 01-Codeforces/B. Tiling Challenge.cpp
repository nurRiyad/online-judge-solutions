#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    char ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==(n-1)||j==(n-1)) continue;
            else{
                if(ar[i+1][j]=='.'&&ar[i-1][j]=='.'&&ar[i][j+1]=='.'&&ar[i][j-1]=='.'&&ar[i][j]=='.'){
                    ar[i+1][j]='#';
                    ar[i-1][j]='#';
                    ar[i][j+1]='#';
                    ar[i][j-1]='#';
                    ar[i][j]='#';
                }
                else continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i][j]=='.'){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
