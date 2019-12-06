#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i=9;
    cin>>a;
    if(a==1){
        cout<<1<<endl<<1<<endl;
        return 0;
    }
    if(a<10) i=a-1;
    for( i;i>0;i--){
        if(a%i==0){
            cout<<a/i<<endl;
            for(int j=0;j<(a/i)-1;j++){
                cout<<i<<" ";
            }
            cout<<i<<endl;
            break;
        }

    }
    return 0;
}
