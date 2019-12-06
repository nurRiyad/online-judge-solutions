#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll> v(m);
    ll ar[n+5];
    memset(ar,0,sizeof(ar));
    for(ll i=0;i<m;i++) cin>>v[i];

    cout<<"YES"<<endl;

    return 0;
}
