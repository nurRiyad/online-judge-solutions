#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            if(j%2==0){
                if(s[i][j]!='-') s[i][j]='B';
            }
            else{
                if(s[i][j]!='-') s[i][j]='W';
            }
        }
    }
    for(int i=1;i<n;i+=2){
        for(int j=0;j<m;j++){
            if(j%2==0){
                if(s[i][j]!='-') s[i][j]='W';
            }
            else{
                if(s[i][j]!='-') s[i][j]='B';
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;

}
