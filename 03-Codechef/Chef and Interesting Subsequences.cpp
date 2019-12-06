#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll nCr(ll n,ll k){
    ll C[n+1][k+1];
    ll i,j;
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=min(i,k);j++)
        {
            if(j==0||j==i) C[i][j]=1;
            else C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
    }
    return C[n][k];
}

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
        for(ll i=0;i<n;i++) cin>>v[i];

        vector<ll> a;
        sort(v.begin(),v.end());
        ll x=v[k-1],cnt1=0,cnt2=0;
        for(ll i=0;i<k;i++){
            if(v[i]==x) cnt1++;
        }
        for(ll i=k;i<v.size();i++){
            if(v[i]==x) cnt2++;
        }
        if(cnt2==0){
            cout<<1<<endl;
            continue;
        }
        else{
            ll box=cnt1;
            ll ball=cnt2+cnt1;
            ll x=nCr(ball,box);
            cout<<x<<endl;
            continue;
        }
    }
    return 0;
}
