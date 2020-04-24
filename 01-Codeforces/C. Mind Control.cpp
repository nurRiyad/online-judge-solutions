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
        ll n,m,k,ans;
        cin>>n>>m>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        bool flag=false;
        ll i=0,j=n-1;
        for(ll cnt=0;cnt<k;cnt++){
            if(cnt==m-1){
                ans=max(v[i],v[j]);
                flag=true;
                break;
            }
            if(v[i]>v[j]){
                j--;
            }
            else{
                i++;
            }
        }
        if(flag){
            cout<<ans<<endl;
            continue;
        }


    return 0;
}

