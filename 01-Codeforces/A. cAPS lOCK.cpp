#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int flag=0,temp=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]>=97&&a[i]<=122){
            flag=1;
        }
        if(i>=1){
            if((a[0]>=65&&a[0]<=90)||(a[i]>=97&&a[i]<=122)){
                temp=1;
            }
        }

    }
    //cout<<flag<<"  "<<temp<<endl;
    if(flag==0){
        for(int i=0;i<a.length();i++){
            a[i]=a[i]+32;
        }
        cout<<a<<endl;
    }
    else if(temp==0){
        a[0]=a[0]-32;
        for(int i=1;i<a.length();i++){
            a[i]=a[i]+32;
        }
        cout<<a<<endl;
    }
    else{
        cout<<a<<endl;
    }
    return 0;

}
