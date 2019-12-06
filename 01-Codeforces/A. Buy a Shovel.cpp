#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,num=0;
    cin>>a>>b;
    i=a;
    while(2){
        num++;
        if(a%10==0||a%10==b) break;
        a=a+i;
        //cout<<a<<endl;
    }
    cout<<num<<endl;
    return 0;
}
