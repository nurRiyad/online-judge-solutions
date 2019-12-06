#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,m,n,s;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>a;
            if(a==1){
                m=i;
                n=j;
            }
        }
    }
    s=abs(m-3)+abs(n-3);
    cout<<s<<endl;
    return 0;
}
