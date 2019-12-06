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
        ll n,r;
        cin>>n>>r;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        ll mcnt=0;
        for(ll i=0;i<v.size();i++){
            mcnt++;
            ll x=v[i];
            i++;
            while(i<n&&v[i]==x) i++;
            if(mcnt*r>=v[i]) break;
            else i--;
        }
        cout<<mcnt<<endl;
    }
    return 0;
}
