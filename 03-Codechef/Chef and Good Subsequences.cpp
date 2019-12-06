#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
#define sz 10000
ll ar[sz+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    vector<ll> vc;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        ar[a]++;
    }
    for(ll i=0;i<sz;i++){
        if(ar[i]>0) vc.push_back(ar[i]);
    }

    ll br[sz+100],cr[sz+100];
    memset(br,0,sizeof(br));
    memset(cr,0,sizeof(cr));

    for(ll i=0;i<vc.size();i++){
        ll y=vc[i];
        if(i==0){
            br[0]=1;
            br[1]=y;
            cr[0]=1;
            cr[1]=y;
        }
        else{
            for(ll i=0;i<sz;i++){
                if(br[i]!=0){
                    ll p=((br[i]*y)%mod);
                    ll q=i+1;
                    cr[q]=(cr[q]+p)%mod;
                }
            }
            copy(cr,cr+sz,br);
        }
    }
    ll sum=0;
    for(ll i=0;i<=min(sz,k);i++){
        if(cr[i]>0) sum=(sum+cr[i])%mod;
    }
    /*for(ll i=0;i<20;i++){
        cout<<v[i]<<" ";
    }*/
    cout<<sum<<endl;
    return 0;
}
