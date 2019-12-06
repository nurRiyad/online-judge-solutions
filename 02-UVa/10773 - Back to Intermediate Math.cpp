#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        double u,v,d;
        cin>>d>>v>>u;
        if(u>v&&v!=0){
            double alfa=acos(-v/u);
            double t1=d/(u*sin(alfa));
            double t2=d/u;
            cout<<"Case "<<i<<": "<<setprecision(3)<<fixed<<abs(t1-t2)<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"can't determine"<<endl;
        }
    }
    return 0;
}
