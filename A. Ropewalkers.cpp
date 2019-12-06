#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx=max(a,max(b,c));
    int mn=min(a,min(b,c));
    int mid=a+b+c-mx-mn;
    int ans1=d-(mx-mid);
    if(ans1<0) ans1=0;
    int ans2=d-(mid-mn);
    if(ans2<0) ans2=0;
    cout<<ans1+ans2<<endl;
    return 0;
}
