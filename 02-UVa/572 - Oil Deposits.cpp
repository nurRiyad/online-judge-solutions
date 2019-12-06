#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 1000
string s[1000];
ll ar[mx][mx];
ll ax[8]={0,0,1,-1,1,1,-1,-1};
ll bx[8]={1,-1,0,0,1,-1,1,-1};
ll n,m;

void dfs(ll a,ll b){
    //cout<<a<<" "<<b<<endl;
    ar[a][b]=1;
    for(ll i=0;i<8;i++){
        ll x=a+ax[i];
        ll y=b+bx[i];
        //cout<<"------------> "<<x<<" "<<y<<endl;
        if(x>=0&&x<n&&y>=0&&y<m){
            if(s[x][y]=='@'&&ar[x][y]==0) dfs(x,y);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(cin>>n>>m){
        memset(ar,0,sizeof(ar));
        if(n==0&&m==0) return 0;
        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        ll cnt=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<s[i].size();j++){
                char ch=s[i][j];
                if(ch=='@'&&ar[i][j]==0){
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

