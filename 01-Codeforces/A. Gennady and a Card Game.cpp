#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b[5];
    cin>>a;
    int flag=1;
    for(int i=0;i<5;i++){
        string x;
        cin>>x;
        if((x[0]==a[0])||(x[1]==a[1])) flag=0;
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;


}
