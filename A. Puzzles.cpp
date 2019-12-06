#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int mi;
    for(int i=0;i<=(n-m);i++){
        int x=a[i+m-1]-a[i];
        if(i==0){
            mi=x;
        }
        if(x<mi){
            mi=x;
        }
    }
    cout<<mi<<endl;
    return 0;

}
