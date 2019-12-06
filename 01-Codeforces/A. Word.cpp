#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int x=0,y=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>=65&&a[i]<=90){
            x++;
        }
        else{
            y++;
        }
    }
    if(x>y){
        for(int i=0;i<a.length();i++){
            if(a[i]>=97&&a[i]<=122){
                a[i]=a[i]-32;
            }
        }
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]>=65&&a[i]<=90){
                a[i]=a[i]+32;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
