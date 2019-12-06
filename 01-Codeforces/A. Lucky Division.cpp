#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,flag=1;
    cin>>a;
    c=a;
    while(a){
        b=a%10;
        if(b!=4&&b!=7){
            flag=0;
        }
        a=a/10;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else if(c%4==0||c%7==0||c%44==0||c%77==0||c%47==0||c%74==0||c%444==0||c%477==0||c%447==0||c%474==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
