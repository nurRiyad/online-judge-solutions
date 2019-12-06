#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m,q;
    cin>>n>>m>>q;
    ll g=__gcd(n,m);
    ll a=n/g;
    ll b=m/g;
    while(q--){
        ll sa,sb,ra,rb;
        cin>>sa>>sb>>ra>>rb;

        ll pos1,pos2;
        sb--;rb--;
        if(sa==1) pos1=sb/a;
        else pos1=sb/b;

        if(ra==1) pos2=rb/a;
        else pos2=rb/b;

        if(pos1==pos2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
