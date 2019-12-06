#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[1000];
ll br[1000];


void solution(){
    br[0]=1;
    for(ll i=2;i<200;i++){
        ll x=ar[i-1],lastOcca=-1;
        for(ll j=i-2;j>=1;j--){
            if(ar[j]==x){
                lastOcca=j;
                break;
            }
        }
        if(lastOcca==-1) ar[i]=0;
        else ar[i]=(i-1)-lastOcca;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    solution();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=ar[n];
        ll cnt=0;
        for(ll i=1;i<=n;i++) if(ar[i]==x) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
