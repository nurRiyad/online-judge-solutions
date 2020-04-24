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
        ll ar[500];
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            ar[x]=1;
        }
        ll cnt=0,ans;
        for(ll i=1;;i++){
            if(ar[i]==0){
                if(cnt<k){
                    cnt++;
                }
                else{
                    ans=i-1;
                    break;
                }
            }
            else continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}
