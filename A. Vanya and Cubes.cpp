#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum1=0,sum2=0,i=1,level=0;
    cin>>a;
    while(2){
        sum1+=i;
        sum2+=sum1;
        if(sum2>a) break;
        //cout<<sum2<<endl;
        i++;
        level++;
    }
    cout<<level<<endl;
    return 0;
}
