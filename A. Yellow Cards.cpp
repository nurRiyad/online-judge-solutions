#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b,ak,bk,c;
    ll x,y,xk,yk,d;
    cin>>a>>b>>ak>>bk>>c;
    d=c;
    if(ak>bk){
        x=a;
        xk=ak;
        y=b;
        yk=bk;
    }
    else{
        x=b;
        xk=bk;
        y=a;
        yk=ak;
    }
    ll mn1=min(y,c/yk);
    c-=mn1*yk;
    c=max((ll)0,c);
    ll mn2=min(x,c/xk);
    ll mn,mx;
    mn=mn1+mn2;


    ll aa=(x*(xk-1))+(y*(yk-1));
    if(aa>=d) mx=0;
    else{
        d=d-aa;
        mx=min(d,(x+y));
    }

    cout<<mx<<" "<<mn<<endl;
    return 0;
}
