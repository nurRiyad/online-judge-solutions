#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll pm[3010];
vector<ll> prm;
void prime(){
    pm[0]=1;
    pm[1]=1;
    for(ll i=2;i<=sqrt(2000);i++){
        if(pm[i]==0){
            for(ll j=i*2;j<=2000;j+=i){
                pm[j]=1;
            }
        }
    }
    for(ll i=0;i<1200;i++){
        if(pm[i]==0) prm.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    prime();

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ar[n+10];
        ll cnt=0,num=1;
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<prm.size();i++){
            ll x=prm[i];
            bool flag=false;
            for(ll j=0;j<v.size();j++){
                if(v[j]%x==0&&ar[j]==0){
                    ar[j]=num;
                    cnt++;
                    flag=true;
                }
                if(cnt==n) break;
            }
            if(flag) num+=1;
            if(cnt==n) break;
        }
        for(ll i=0;i<n;i++){
            if(ar[i]==0){
                ar[i]=num;
                num++;
            }
        }
        cout<<num-1<<endl;
        for(ll i=0;i<n;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}
