#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    double h,l;
    cin>>h>>l;
    double ans=((l*l)-(h*h))/(2.0*h);
    printf("%.9lf\n",ans);
    return 0;
}
