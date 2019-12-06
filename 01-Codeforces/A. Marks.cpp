#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++) ar[i]=0;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            bool hs=true;
            char ch=s[i][j];
            //cout<<ch<<endl;
            for(int k=0;k<n;k++){
                if(i==k) continue;
                //cout<<ch<<"---"<<s[k][j]<<endl;
                if(ch<s[k][j]){
                    hs=false;
                    break;
                }
            }
            if(hs){
                //cout<<"student--"<<i<<endl;
                ar[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        //cout<<ar[i]<<" ";
        if(ar[i]!=0) sum++;
    }
    //cout<<endl;
    cout<<sum<<endl;
    return 0;
}
