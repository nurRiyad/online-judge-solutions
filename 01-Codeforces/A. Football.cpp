#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int s1=0,s2=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='0'){
            s1++;
            if(s1>=7){
                break;
            }
        }
        else{
            s1=0;
        }
        if(a[i]=='1'){
            s2++;
            if(s2>=7){
                break;
            }
        }
        else{
            s2=0;
        }
    }
    if(s1>=7||s2>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
