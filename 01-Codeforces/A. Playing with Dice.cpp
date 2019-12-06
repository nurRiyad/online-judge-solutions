#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,dw=0,aw=0,bw=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++){
        int ad=abs(i-a);
        int bd=abs(i-b);
        if(ad==bd) dw++;
        else if(ad>bd) aw++;
        else bw++;
    }
    cout<<bw<<" "<<dw<<" "<<aw<<endl;
    return 0;
}
