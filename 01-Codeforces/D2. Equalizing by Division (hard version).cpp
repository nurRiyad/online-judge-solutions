#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 200010
vector<ll> v[mx+5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k,mex=INT_MIN;
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        mex=max(mex,x);
        v[x].push_back(0);
        ll cnt=0;
        while(x){
            x/=2;
            cnt++;
            v[x].push_back(cnt);
        }
    }
    ll mn=INT_MAX;
    for(ll i=0;i<=mex;i++){
        if(v[i].size()<k) continue;
        sort(v[i].begin(),v[i].end());
        ll cnt=0;
        for(ll j=0;j<k;j++){
            cnt+=v[i][j];
            //cout<<v[i][j]<<" ";
        }
        //cout<<endl;
        mn=min(mn,cnt);
    }
    cout<<mn<<endl;
    return 0;
}
