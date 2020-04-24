#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k,cnt=0;
    cin>>n>>k;
    ll t=n;
    vector<pair<ll,ll> > vp;
    for(ll i=1;i<=(n+1-k);i++){
        cout<<"? ";
        for(ll j=i;j<(i+k);j++){
            if(j+1==(i+k)) cout<<j<<endl;
            else cout<<j<<" ";
        }
        cnt++;
        fflush(stdout);
        ll x,y;
        cin>>x>>y;
        vp.push_back(make_pair(y,x));
    }

    return 0;
}

