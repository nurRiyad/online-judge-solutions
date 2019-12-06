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
        ll cnt1=0;
        ll cnt2=0;
        ll ar[n+10];
        ll br[n+10];
        for(ll i=0,j=n-1;i<n;i++,j--){
            if(s[i]=='0'){
                ar[i]=0;
                cnt1=0;
            }
            else {
                cnt1++;
                ar[i]=cnt1;
            }
            if(s[j]=='0'){
                br[j]=0;
                cnt2=0;
            }
            else{
                cnt2++;
                br[j]=cnt2;
            }
        }
        ll ans=min(k,n);
        for(ll i=0;i<n;i++){
            ar[i]=max(ar[i],br[i]);
            ll dane=i;
            ll bame=(n-1)-i;
            ll xx=max(dane,bame);
            ll yy=ar[i]+min(xx,k);
            ans=max(ans,yy);
        }
        cout<<ans<<endl;
    }
    return 0;
}

