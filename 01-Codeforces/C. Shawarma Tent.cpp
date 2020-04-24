#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    ll x,y;
    cin>>x>>y;
    ll x1=0,x2=0,y1=0,y2=0;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(x>a) x1++;
        if(x<a) x2++;
        if(y>b) y1++;
        if(y<b) y2++;
    }
    ll mx=max(max(x1,x2),max(y1,y2));
    cout<<mx<<endl;
    if(mx==x1) cout<<x-1<<" "<<y<<endl;
    else if(mx==x2) cout<<x+1<<" "<<y<<endl;
    else if(mx==y1) cout<<x<<" "<<y-1<<endl;
    else if(mx==y2) cout<<x<<" "<<y+1<<endl;
    return 0;
}

