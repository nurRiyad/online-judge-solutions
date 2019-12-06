#include<bits/stdc++.h>
using namespace std;
char v[510][510];

char M(int i,int j){
    return v[i][j];
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch;
            cin>>ch;
            v[i][j]=ch;
        }
    }
    int sum=0;
    for(int i=2;i<n;i++){
        for(int j=2;j<n;j++){
            if(M(i,j)=='X'){
                if(M(i-1,j-1)=='X'){
                    if(M(i-1,j+1)=='X'){
                        if(M(i+1,j-1)=='X'){
                            if(M(i+1,j+1)=='X'){
                                sum++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
