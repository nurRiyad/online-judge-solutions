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
        ll n,m;
        cin>>n>>m;
        vector<string> va(n),vb(n);
        for(ll i=0;i<n;i++){
            cin>>va[i];
        }
        for(ll i=0;i<n;i++){
            cin>>vb[i];
        }
        ll ans=INT_MAX;
        for(ll dr=-n;dr<n;dr++){
            for(ll dc=-m;dc<m;dc++){
                ll cnt=0;
                for(ll i=0;i<n;i++){
                    for(ll j=0;j<m;j++){
                        if((i+dr<n&&i+dr>=0)&&(j+dc>=0&&j+dc<m)){
                            if(va[i][j]!=vb[i+dr][j+dc]) cnt++;
                        }else{
                            if(va[i][j]!='0') cnt++;
                        }
                    }
                }
                ans=min(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
