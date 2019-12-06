#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007

ll bigmod(ll a,ll x,ll m){
    if(x==0) return (ll)1%m;
    ll b=bigmod(a,x/(ll)2,m);
    b =(b*b)%m;
    if(x%2==1) b=(b*a)%m;
    return b;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll h,w;
    cin>>h>>w;
    int ar[h+15][w+15];
    memset(ar,-1,sizeof(ar));
    bool xxx=false;
    for(ll i=1;i<=h;i++){
        ll x;
        cin>>x;
        if(x==0){
            if(ar[i][1]==1) xxx=true;
            else ar[i][1]=0;
            continue;
        }
        for(ll j=1;j<=x;j++){
           if(ar[i][j]==0) xxx=true;
           else  ar[i][j]=1;
        }
        if(x!=w){
            if(ar[i][x+1]==1) xxx=true;
            else ar[i][x+1]=0;
        }
    }
    for(ll i=1;i<=w;i++){
        ll y;
        cin>>y;
        if(y==0){
            if(ar[1][i]==1) xxx=true;
            else ar[1][i]=0;
            continue;
        }
        for(ll j=1;j<=y;j++){
            if(ar[j][i]==0) xxx=true;
            else ar[j][i]=1;
        }
        if(y!=h){
            if(ar[y+1][i]==1) xxx=true;
            else ar[y+1][i]=0;
        }
    }
    ll cnt=0;
    for(ll i=1;i<=h;i++){
        for(ll j=1;j<=w;j++){
            //cout<<ar[i][j]<<" ";
            if(ar[i][j]==-1) cnt++;
        }
        //cout<<endl;
    }
    if(xxx){
        cout<<0<<endl;
        return 0;
    }
    ll ans=bigmod(2,cnt,mod);
    cout<<ans<<endl;
    return 0;
}
