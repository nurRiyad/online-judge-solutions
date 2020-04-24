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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b&&b==c){
            cout<<0<<endl;
            continue;
        }
        ll x=max(a,max(b,c));
        ll y=min(a,min(b,c));
        ll z=(a+b+c)-x-y;
        if(x==z&&z==y){
            cout<<0<<endl;
            continue;
        }
        if(x==z&&z!=y){
            if(abs(x-y)==1){
                cout<<0<<endl;
                continue;
            }
            else{
                x-=1;
                z-=1;
                y+=1;
                cout<<abs(x-y)+abs(y-z)+abs(x-z)<<endl;
                continue;
            }
        }
        if(y==z&&x!=y){
            if(abs(x-z)==1){
                cout<<0<<endl;
                continue;
            }
            else{
                y++;
                z++;
                x--;
                cout<<abs(x-y)+abs(y-z)+abs(x-z)<<endl;
                continue;
            }
        }
        if(x!=y&&y!=z){
            //cout<<"here"<<endl;
            x--;
            y++;
            cout<<abs(x-y)+abs(y-z)+abs(x-z)<<endl;
            continue;
        }
    }
    return 0;
}

