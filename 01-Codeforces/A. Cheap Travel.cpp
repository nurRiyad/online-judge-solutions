#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum;
    cin>>a>>b>>c>>d;
    double x=b,y=d,z=c;
    if((y/x)<z){
        sum=(a/b)*d;
        int ex=a%b;
        if(d<(ex*c)) cout<<sum+d<<endl;
        else cout<<sum+(ex*c);
    }
    else{
        cout<<a*c<<endl;
    }
    return 0;
}
