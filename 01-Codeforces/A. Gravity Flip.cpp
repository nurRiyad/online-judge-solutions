#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<t;i++){
        if(i!=(t-1)){
            cout<<a[i]<<" ";
        }
        else{
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
