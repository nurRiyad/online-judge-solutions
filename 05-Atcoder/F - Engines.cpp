#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    double x=0,y=0,mxd=0;
    while(n--){
        double a,b;
        cin>>a>>b;
        double d=sqrt(((x+a)*(x+a)) + ((y+b)*(y+b)));
        //cout<<d<<endl;
        if(d>mxd){
            x=x+a;
            y=y+b;
            mxd=d;
        }
    }
    cout<<fixed<<setprecision(20)<<mxd<<endl;
    return 0;
}
