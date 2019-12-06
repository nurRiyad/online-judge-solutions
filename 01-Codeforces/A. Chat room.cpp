#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int h=0,e=0,l=0;
    int flag=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='h'){
            h++;
        }
        if(h){
            if(a[i]=='e'){
                e++;
            }
        }
        if(e){
            if(a[i]=='l'){
                l++;
            }
        }
        if(l>=2){
            if(a[i]=='o'){
                flag++;
            }
        }
    }
    if(flag){
         cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
