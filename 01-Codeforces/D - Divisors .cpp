#include<bits/stdc++.h>
#define ll long long
#define mxx 1000100
using namespace std;
ll br[mxx+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        memset(br,0,sizeof(br));
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll mx=0,ans=0;
        ll ar[11];
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<v.size();i++){
            ll x=v[i];
            if(x>mx){
                ans=max(ans,(ll)0);
            }
            else if(x<11){
                ans=max(ans,ar[x]);
            }
            else{
                ll sum=x,cnt=0;
                while(sum<=mx){
                    cnt+=br[sum];
                    sum+=x;
                }
                ans=max(ans,cnt);
            }
            mx=max(x,mx);
            if(x%1==0) ar[1]++;
            if(x%2==0) ar[2]++;
            if(x%3==0) ar[3]++;
            if(x%4==0) ar[4]++;
            if(x%5==0) ar[5]++;
            if(x%6==0) ar[6]++;
            if(x%7==0) ar[7]++;
            if(x%8==0) ar[8]++;
            if(x%9==0) ar[9]++;
            if(x%10==0) ar[10]++;
            br[x]++;
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
