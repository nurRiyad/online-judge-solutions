#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double v,r,a;
    const double pi=3.141592653589793238;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>r>>v;
        a=(pi/2)*(r/v);
        cout<<"Case "<<i<<":"<<" "<<fixed<<setprecision(8)<<a<<endl;
    }
    return 0;
}
