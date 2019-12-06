#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int x=0,y=0,z=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
           if(a[i]=='1'){
                x++;
           }
           else if(a[i]=='2'){
                y++;
           }
           else if(a[i]=='3'){
                z++;
           }

    }
    for(int i=0;i<x;i++){
        if(y==0&&z==0&&i==(x-1)){
            cout<<1;
        }
        else{
            cout<<1<<"+";
        }
    }
    for(int i=0;i<y;i++){
        if(z==0&&i==(y-1)){
            cout<<2;
        }
        else{
            cout<<2<<"+";
        }
    }
    for(int i=0;i<z;i++){
        if(i==(z-1)){
            cout<<3;
        }
        else{
            cout<<3<<"+";
        }
    }
    cout<<endl;
    return 0;

}
