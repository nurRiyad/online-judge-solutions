#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[1009][1009];
ll visit[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll node,edge;
    cin>>node>>edge;
    for(ll i=0;i<edge;i++){
        ll a,b;
        cin>>a>>b;
        ar[a][b]=1;
        ar[b][a]=1;
    }
    ll q;
    cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        if(ar[a][b]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
