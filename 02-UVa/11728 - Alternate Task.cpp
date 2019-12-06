#include<bits/stdc++.h>
using namespace std;

#define mx 100000
int arr[mx+10];

void SOD()
{
    for(int i=1;i<=mx;i++){
        for(int j=i;j<=mx;j=j+i){
            arr[j]=arr[j]+i;
        }
    }
}

int main()
{
    SOD();
    for(int i=1;;i++){
        long long a,flag=1;
        cin>>a;
        if(a==0) return 0;
        for(int j=mx;j>0;j--){
            if(arr[j]==a){
                cout<<"Case "<<i<<": "<<j<<endl;
                flag=0;
                break;
            }
        }
        if(flag) cout<<"Case "<<i<<": "<<-1<<endl;
    }
    return 0;
}
