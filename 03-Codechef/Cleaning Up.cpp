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
        int ar[n+5];
        memset(ar,0,sizeof(ar));
        for(ll i=1;i<=m;i++){
            ll x;
            cin>>x;
            ar[x]=1;
        }
        vector<ll> chef,assis;
        bool ch=true,as=false;
        for(ll i=1;i<=n;i++){
            if(ar[i]==0){
                if(ch){
                    chef.push_back(i);
                    ch=false;
                    as=true;
                }
                else{
                    assis.push_back(i);
                    as=false;
                    ch=true;
                }
            }
        }
        if(chef.size()==0) cout<<endl;
        for(ll i=0;i<chef.size();i++){
            if(i!=chef.size()-1) cout<<chef[i]<<" ";
            else cout<<chef[i]<<endl;
        }
        if(assis.size()==0) cout<<endl;
        for(ll i=0;i<assis.size();i++){
            if(i!=assis.size()-1) cout<<assis[i]<<" ";
            else cout<<assis[i]<<endl;
        }
    }
    return 0;
}
