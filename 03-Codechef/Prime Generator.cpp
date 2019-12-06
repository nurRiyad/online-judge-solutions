#include<bits/stdc++.h>
#define ll long long
#define mx 1000000
using namespace std;
ll prime[mx+5];
vector<ll> vprime;

void seive(){
    prime[0]=1;
    prime[1]=1;
    for(ll i=2;i<=sqrt(mx);i++){
        for(ll j=i*i;j<=mx;j+=i){
            prime[j]=1;
        }
    }
    for(ll i=2;i<mx;i++){
        if(prime[i]==0) vprime.push_back(i);
    }
}

void segseive(ll l,ll r){
    ll ar[r-l+5];
    memset(ar,0,sizeof(ar));
    for(ll i=0;vprime[i]*vprime[i]<=r;i++){
        ll start=(l/vprime[i])*vprime[i];
        if(start<l) start+=vprime[i];
        for(ll j=start;j<=r;j+=vprime[i]){
            ar[j-l]=1;
        }
        if(start==vprime[i]) ar[start-l]=0;
    }
    for(ll i=l;i<=r;i++){
        if(i==0||i==1) continue;
        if(ar[i-l]==0) cout<<i<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    seive();
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        segseive(l,r);
    }
    return 0;
}
