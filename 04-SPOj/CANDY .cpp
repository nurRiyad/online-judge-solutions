#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    while(cin>>n){
        if(n==-1) return 0;
        vector<ll> v(n);
        ll sum=0;
        for(ll i=0;i<n;i++){ cin>>v[i]; sum+=v[i];}
        if(sum%n!=0){
            cout<<-1<<endl;
            continue;
        }
        ll ans=0,x=sum/n;
        for(ll i=0;i<n;i++){
            if(v[i]>x) ans+=v[i]-x;
        }
        cout<<ans<<endl;

    }

    return 0;
}
