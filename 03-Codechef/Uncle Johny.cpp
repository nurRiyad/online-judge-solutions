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
        ll n;
        cin>>n;
        ll ar[n+1];
        for(ll i=0;i<n;i++) cin>>ar[i];
        ll k;
        cin>>k;
        k=ar[k-1];
        ll x=sizeof(ar)/sizeof(ar[0]);
        sort(ar,ar+n);
        for(ll i=0;i<n;i++){
            if(ar[i]==k){
                cout<<i+1<<endl;
                break;
            }
        }

    }
    return 0;
}
