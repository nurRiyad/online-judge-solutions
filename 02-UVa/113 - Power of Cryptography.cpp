#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c;
    while(cin>>a>>b){
        c=pow(b,1/a);
        cout<<setprecision(0)<<fixed<<c<<endl;
    }
    return 0;
}
