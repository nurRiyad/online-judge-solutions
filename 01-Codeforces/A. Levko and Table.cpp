#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,y;
    cin>>n>>k;
    if(k%n==0){
        x=k/n;
        y=x;
    }
    else{
        x=k/n;
        y=k-(x*(n-1));
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sum==j){
                if(j!=(n-1)) cout<<y<<" ";
                else cout<<y<<endl;
            }
            else{
                if(j!=(n-1)) cout<<x<<" ";
                else cout<<x<<endl;
            }
        }
        sum++;
    }
    return 0;
}
