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
        ll n;
        cin>>n;
        ll mx=INT_MIN,mn=INT_MAX;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
        }
        if(abs(mx-mn)>=n){
            cout<<"YES"<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }
        bool flag=true;
        for(ll i=1;i<n;i++){
            ll x=abs(v[i]-v[i-1]);
            if(x>=2){
                flag=false;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
    }
    return 0;
}

