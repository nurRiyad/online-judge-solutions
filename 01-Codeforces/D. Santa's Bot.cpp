#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        ll q = a / m;
        ll t = m;

        m = a % m, a = t;
        t = y;

        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += m0;

    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    vector<ll> v[n];
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        for(ll j=0;j<k;j++){
            ll a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    cout<<((99%mod)*modInverse(100,mod))%mod<<endl;
    return 0;
}

