#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,fg=1,time=0;
    cin>>m>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(fg<=a[i]){
            time+=a[i]-fg;
            fg=a[i];
        }
        else{
            time+=m-fg+1;
            fg=1;
            time+=a[i]-fg;
            fg=a[i];
        }
    }
    cout<<time<<endl;
    return 0;

}
