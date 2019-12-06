#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bh,bw,sh1,sh2,sw1,sw2;
    cin>>bw>>bh>>sw1>>sh1>>sw2>>sh2;
    for(int i=bh;i>=0;i--){
        bw+=i;
        if(sh1==i){
            bw-=sw1;
            if(bw<0) bw=0;
        }
        if(sh2==i){
            bw-=sw2;
            if(bw<0) bw=0;
        }
    }
    cout<<bw<<endl;
    return 0;
}
