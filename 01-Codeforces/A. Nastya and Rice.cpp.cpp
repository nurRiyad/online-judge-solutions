#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mk  make_pair
#define pb  push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,a,b,c,d;
        bool flag=true;
        cin>>n>>a>>b>>c>>d;
        ll cc=c-d;
        ll dd=c+d;
        ll x=n*(a-b);
        ll y=n*(a+b);
        if(x>dd||y<cc) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
