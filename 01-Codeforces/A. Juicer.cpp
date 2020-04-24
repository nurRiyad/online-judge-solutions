#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b,c;
    cin>>a>>b>>c;
    vector<ll> v(a);
    for(ll i=0;i<a;i++) cin>>v[i];
    ll cnt=0,ans=0;
    for(ll i=0;i<a;i++){
        if(v[i]>b) continue;
        cnt+=v[i];
        if(cnt>c){
            ans++;
            cnt=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}

