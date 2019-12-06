#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

        ll n;
        cin>>n;
        ll ev=0,od=0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==1) od++;
            else ev++;
        }
        cout<<min(od,ev)<<endl;
    return 0;
}
