#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b[30];
    cin>>t;
    string a;
    cin>>a;
    for(int i=0;i<30;i++){
        b[i]=0;
    }
    for(int i=0;i<t;i++){
        if(a[i]>=65&&a[i]<=90){
            a[i]=a[i]+32;
        }
    }
    for(int i=0;i<t;i++){
        b[a[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(b[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
