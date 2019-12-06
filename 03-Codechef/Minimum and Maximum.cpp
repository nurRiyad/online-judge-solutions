#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll c,m,x,y;
        cin>>m>>c;
        if(m>c){
            x=c;
            y=m-c;
        }
        else{
            y=m-(c%m);
            x=m-y;
        }
        if(x==y) cout<<((x*2)-1)<<endl;
        else cout<<min(x,y)*2<<endl;
    }
    return 0;
}
