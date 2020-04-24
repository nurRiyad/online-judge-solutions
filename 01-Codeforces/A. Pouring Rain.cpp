#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pi 3.14159265358

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double x= v/((pi*d*d)/4.0);
    if(x>e){
        cout<<"YES"<<endl;
        cout<<fixed<<setprecision(10)<<h/(((4*v)/(pi*d*d))-e)<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
