#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    if(a>1){
        for(int i=1;i<=a;i++){
            sum+=i;
        }
    }
    else{
        for(int i=1;i>=a;i--){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
