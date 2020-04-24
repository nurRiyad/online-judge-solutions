#include<bits/stdc++.h>
#define ll int
using namespace std;
#define mx 200005
ll ar[mx],pf[202][mx];
vector<ll> v[202];


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
        for(ll i=1;i<=n;i++){
            cin>>ar[i];
            for(ll j=1;j<=200;j++){
                pf[j][i]=pf[j][i-1];
                if(j==ar[i]) pf[j][i]++;
            }
            v[ar[i]].push_back(i);
        }
        ll ans=0;
        for(ll i=1;i<=200;i++){
            if(pf[i][n]!=0){
                ll fst=0,lst=v[i].size()-1;
                ll cnt=0;
                while(fst<lst){
                    ll fi=v[i][fst],li=v[i][lst];
                    cnt+=2;
                    ll mxx=0;
                    for(ll j=1;j<=200;j++){
                        ll mid=pf[j][li-1]-pf[j][fi];
                        mxx=max(mxx,mid);
                    }
                    ans=max(ans,cnt+mxx);
                    fst++;lst--;
                }
            }
        }
        cout<<max(ans,(ll)1)<<endl;
        for(ll i=0;i<=200;i++) v[i].clear();
    }
    return 0;
}
