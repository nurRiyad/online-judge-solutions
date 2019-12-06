#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        int c1=1+(k*i);
        if(c1>0&&c1<=n){
            //cout<<c1<<endl;
            arr[c1]=0;
        }
        int c2=1+(k*(-i));
        if(c2>0&&c2<=n){
            arr[c2]=0;
            //cout<<c1<<endl;
        }
    }
    int sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==-1) sum1++;
        if(arr[i]==1) sum2++;
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;

}
