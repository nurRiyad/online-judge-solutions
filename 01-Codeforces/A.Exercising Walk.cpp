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
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if((x<x1||x>x2)||(y<y1||y>y2)){
            cout<<"NO"<<endl;
            continue;
        }
        if(x1==x2&&x2==x){
            if(a>0||b>0){
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(y1==y2&&y2==y){
            if(c>0||d>0){
                cout<<"NO"<<endl;
                continue;
            }
        }
        ll nx=x-a+b;
        ll ny=y-c+d;
        if(nx>=x1&&nx<=x2&&ny>=y1&&ny<=y2){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
