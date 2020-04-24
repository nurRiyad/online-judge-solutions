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
        vector<ll> v(n);
        bool flag=false;
        ll ar[10000];
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<n;i++){
            cin>>v[i];
            ar[v[i]]++;
            if(ar[v[i]]>=3) flag=true;
            if(i!=0){
                if(ar[v[i]]>=2){
                    if(v[i]!=v[i-1]) flag=true;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
