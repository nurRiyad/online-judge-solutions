#include<bits/stdc++.h>
#define ll long long
const int inf = 100000000;
using namespace std;
ll ar[110][110][110][3];
ll br[110];
ll n;
ll dp(ll ind,ll od,ll ev,ll pre){
    if(od<0) return inf;
    if(ev<0) return inf;
    if(ind==n+1) return 0;
    if(ar[ind][od][ev][pre]!=-1) return ar[ind][od][ev][pre];
    ll ans=inf;
    if(br[ind]!=0){
        ll preset=br[ind]%2;
        ans=min(ans,dp(ind+1,od,ev,preset)+(pre!=preset));
    }
    else{
        ans=min(ans,dp(ind+1,od-1,ev,1)+(1!=pre%2));
        ans=min(ans,dp(ind+1,od,ev-1,0)+(0!=pre%2));
    }
    return ar[ind][od][ev][pre]=ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //ll n;
    cin>>n;
    ll cr[n+10];
    memset(cr,0,sizeof(cr));
    memset(ar,-1,sizeof(ar));
    for(ll i=1;i<=n;i++){
        cin>>br[i];
        cr[br[i]]++;
    }
    ll od=0,ev=0;
    for(ll i=1;i<=n;i++){
        if(cr[i]==0&&i%2==0) ev++;
        else if(cr[i]==0&&i%2==1) od++;
    }
    //cout<<od<<" "<<ev<<endl;
    ll ans=min(dp(1,od,ev,1),dp(1,od,ev,0));
    cout<<ans<<endl;
    return 0;
}
