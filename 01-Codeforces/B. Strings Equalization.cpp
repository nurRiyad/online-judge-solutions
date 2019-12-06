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
        string a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES"<<endl;
            continue;
        }
        else if(a.size()==1||b.size()==1){
            cout<<"NO"<<endl;
            continue;
        }
        ll ar[30];
        ll br[30];
        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        for(ll i=0;i<a.size();i++){
            ll x=a[i]-'a';
            ar[x]++;
        }
        for(ll i=0;i<b.size();i++){
            ll x=b[i]-'a';
            br[x]++;
        }
        bool fg=true;
        for(ll i=0;i<28;i++){
            //cout<<ar[i]<<" "<<br[i]<<endl;
            if(ar[i]>0&&br[i]>0){
                cout<<"YES"<<endl;
                fg=false;
                break;
            }
        }
        if(fg) cout<<"NO"<<endl;
    }
    return 0;
}
