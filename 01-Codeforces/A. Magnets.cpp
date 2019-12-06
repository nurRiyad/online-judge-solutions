#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t-1;i++){
        if(a[i]!=a[i+1]){
            sum++;
        }
    }
    cout<<sum+1<<endl;
    return 0;
}
