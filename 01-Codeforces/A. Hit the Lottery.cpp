#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    int a=n/100;
    n-=100*a;
    int b=n/20;
    n-=20*b;
    int c=n/10;
    n-=c*10;
    int d=n/5;
    n-=d*5;
    int e=n/1;
    n-=e*1;
    cout<<a+b+c+d+e<<endl;
    return 0;
}
