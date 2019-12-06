#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s[100];
ll ar[100][100];
ll cnt[100][100];
ll n,m,x;
vector<pair<ll,ll> > vp;

ll travers(ll a,ll b){
    ar[a][b]=1;
    ll x=cnt[a][b];
    char ch=s[a][b];
    if(ch=='N') a=a-1;
    else if(ch=='S') a=a+1;
    else if(ch=='E') b=b+1;
    else b=b-1;
    if(a<0||a>=n||b<0||b>=m) return (x+1);
    else{
        if(ar[a][b]==0){
            cnt[a][b]=x+1;
            travers(a,b);
        }
        else{
            vp.push_back(make_pair(a,b));
            return x+1;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(true){
        cin>>n>>m>>x;
        if(n==0&&m==0&&x==0) return 0;
        vp.clear();
        memset(ar,0,sizeof(ar));
        memset(cnt,0,sizeof(cnt));
        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        ll ans=travers(0,x-1);
        if(vp.size()==0){
            cout<<ans<<" step(s) to exit"<<endl;
        }
        else{
            ll x=cnt[vp[0].first][vp[0].second];
            cout<<x<<" step(s) before a loop of "<<ans-x<<" step(s)"<<endl;
        }
    }
    return 0;
}
