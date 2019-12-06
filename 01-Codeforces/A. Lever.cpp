#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    long long pv,lfsum=0,rtsum=0;
    cin>>a;
    for(long long i=0;i<a.size();i++){
        if(a[i]=='^'){
            pv=i;
            break;
        }
    }
    for(long long  i=pv+1,j=1;i<a.size();i++,j++){
        if(a[i]!='='){
            long long x=a[i]-'0';
            rtsum+=(j*x);
        }
    }
    for(long long  i=pv-1,j=1;i>=0;i--,j++){
        if(a[i]!='='){
            long long x=a[i]-'0';
            lfsum+=(j*x);
        }
    }
    if(lfsum==rtsum) cout<<"balance"<<endl;
    else if(lfsum>rtsum) cout<<"left"<<endl;
    else cout<<"right"<<endl;
    return 0;
}
