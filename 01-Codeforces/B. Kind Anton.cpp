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
        vector<ll> v(n),r(n);
        ll x=-1,y=-1;
        for(ll i=0;i<n;i++){
             cin>>v[i];
             if(v[i]==1&&x==-1){
                x=i;
             }
             if(v[i]==-1&&y==-1){
                y=i;
             }
        }

        bool flag=true;
        for(ll i=0;i<n;i++) cin>>r[i];
        for(ll i=0;i<n;i++){
            if(v[i]==r[i]) continue;
            else if(r[i]<v[i]){
                if(y==-1){
                    flag=false;
                    break;
                }
                if(y>=i){
                    flag=false;
                    break;
                }
            }
            else{
                if(x==-1){
                    flag=false;
                    break;
                }
                if(x>=i){
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
