#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int b=0;
            if(i>0&&ar[i-1][j]=='o') b++;
            if(j>0&&ar[i][j-1]=='o') b++;
            if(i<n-1&&ar[i+1][j]=='o') b++;
            if(j<n-1&&ar[i][j+1]=='o') b++;
            if(b==0||b==2||b==4) a++;
        }
    }
    if(a==(n*n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
