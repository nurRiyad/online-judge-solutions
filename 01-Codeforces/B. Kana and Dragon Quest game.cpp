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
        ll x,a,b;
        cin>>x>>a>>b;
        while(a>0&&x>20){
            x=(x/2)+10;
            a--;
        }
        ll t=b*10;
        if(t>=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
