#include<bits/stdc++.h>
#define ll long long
using namespace std;
string maze[20];
ll dx[4]={1,-1,0,0};
ll dy[4]={0,0,1,-1};
ll cnt=0,v,e;

void dfs(ll x,ll y){
    //cout<<"imhere"<<x<<" "<<y<<" "<<v<<" "<<e<<endl;
    maze[x][y]='#';
    for(ll i=0;i<4;i++){
        ll nx=x+dx[i];
        ll ny=y+dy[i];
        if(nx>=0&&ny>=0 && nx<v && ny<e){
            if(maze[nx][ny]=='.'){
                //cout<<nx<<" "<<ny<<endl;
                cnt++;
                dfs(nx,ny);
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t,p=0;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>e>>v;
        for(ll i=0;i<v;i++){
            string s;
            cin>>s;
            maze[i]=s;
        }
        for(ll i=0;i<v;i++){
            for(ll j=0;j<maze[i].size();j++){
                if(maze[i][j]=='@') dfs(i,j);
            }
        }
        cout<<"Case "<<++p<<": "<<++cnt<<endl;
    }
    return 0;
}
