#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b[30],c,sum=0;
    for(int i=0;i<30;i++){
        b[i]=0;
    }
    cin>>a;
    for(int i=0;i<a.length();i++){
        c=a[i]-97;
        b[c]++;
    }
    for(int i=0;i<26;i++){
        if(b[i]){
            sum++;
        }
    }
    if(sum%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
