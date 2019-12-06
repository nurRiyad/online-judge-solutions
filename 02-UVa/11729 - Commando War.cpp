#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    for(int i=1;i<= 10002;i++){
        cin>>a>>b;
        if(a==0&&b==0)return 0;
        if((b+(b*26))<a){
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
        }
        else if(b==a||b>a){
            cout<<"Case "<<i<<": "<<0<<endl;
        }
        else{
            a=a-b;
            if(a%b==0){
                cout<<"Case "<<i<<": "<<a/b<<endl;
            }
            else{
                cout<<"Case "<<i<<": "<<(a/b)+1<<endl;
            }
        }
    }
    return 0;
}
