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
        ll n,m,ans=0;
        cin>>n>>m;
        ll cnt=0;
        for(ll i=1;i<=10;i++){
            cnt+=(m*i)%10;
        }
        ll cokro=(n/m)/10;
        ans+=cokro*cnt;
        ll suru=(cokro*10*m)+m;
        while(suru<=n){
            ans+=(suru%10);
            suru+=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
