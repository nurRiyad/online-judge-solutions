#include<bits/stdc++.h>
#define ll long long
#define mx 1000100
using namespace std;
ll ar[mx+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,ans=0;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a,cnt=0;
            cin>>a;
            for(ll j=1;j<=sqrt(a);j++){
                if(a%j==0){
                    if(j!=a/j){
                        cnt+=ar[j];
                        cnt+=ar[a/j];
                    }
                    else cnt+=ar[j];
                }
            }
            cout<<"cnt="<<cnt<<endl;
            ans=max(ans,cnt);
            ar[a]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
