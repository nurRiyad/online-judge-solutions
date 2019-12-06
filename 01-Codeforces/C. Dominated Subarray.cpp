#include<bits/stdc++.h>
#define ll long long
#define mx 1000000
using namespace std;
ll ar[mx+10];
ll br[mx+10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){

        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        ll n;
        cin>>n;
        ll ans=INT_MAX;
        bool flag=true;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            ar[a]++;
            if(ar[a]==1){
                br[a]=i;
            }
            else if(ar[a]==2){
                flag=false;
                ll ind1=i;
                ll ind2=br[a];
                ll dif=ind1-ind2+1;
                ans=min(dif,ans);
                ar[a]=1;
                br[a]=i;
            }
        }
        if(flag) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}

