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
        vector<ll> v(n);
        ll cnt=0,flag=1,ans;
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++){
            cnt=cnt+v[i];
            cnt=cnt-k;
            if(cnt<0){
                flag=0;
                cout<<"NO"<<" "<<i+1<<endl;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
    }
    return 0;
}

