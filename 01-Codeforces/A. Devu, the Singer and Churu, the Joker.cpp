#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,sum=0;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    int rt=(sum+(n-1)*10);
    if(rt<=d){
        int m=d-sum;
        cout<<m/5;
    }
    else{
        cout<<-1<<endl;
    }
    return 0 ;

}
