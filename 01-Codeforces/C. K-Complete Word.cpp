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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll ans=0;
        for(ll i=0;i<(k+1)/2;i++){
            ll ar[30];
            memset(ar,0,sizeof(ar));
            ll mx=0;
            for(ll j=i,p=k-1-i;j<n;j+=k,p+=k){
               mx=max(mx, ++ar[s[j]-'a']);
               mx=max(mx, ++ar[s[p]-'a']);
            }
            if(i==k-1-i){
                mx=mx/2;
                ans+=(n/k)-mx;
            }
            else{
                ans+=((n/k)*2)-mx;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
