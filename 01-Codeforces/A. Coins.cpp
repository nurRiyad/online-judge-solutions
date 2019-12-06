#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,c;
    cin>>n>>s;
    if(s>=n){
        if(s%n==0) c=s/n;
        else c=(s/n)+1;
        cout<<c<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}
