#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double x,y,z;
        cin>>x>>y>>z;
        x=x*60;
        y=y*60;
        double each=(x+y)/3;
        x=x-each;
        y=y-each;
        double totallmin=(x+y);
        double f=(z*x)/totallmin;
        int p=f;
        if(p<1)cout<<0<<endl;
        else cout<<p<<endl;
    }
    return 0;
}
