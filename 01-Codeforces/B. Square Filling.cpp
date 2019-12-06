#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll> > vp;
    int A[n+1][m+1],B[n+1][m+1];
    memset(B,0,sizeof(B));

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>A[i][j];
        }
    }

    for(ll i=0;i<n-1;i++){
        for(ll j=0;j<m-1;j++){
            if(A[i][j]==0||A[i][j+1]==0||A[i+1][j]==0||A[i+1][j+1]==0){
                //cout<<"idex with zero "<<i<<" "<<j<<endl;
            }
            else {
                //cout<<"idex "<<i<<" "<<j<<endl;
                B[i][j]=1;
                B[i+1][j]=1;
                B[i+1][j+1]=1;
                B[i][j+1]=1;
                vp.push_back(make_pair(i,j));
            }
        }
    }

    bool flag=false;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(A[i][j]!=B[i][j]){
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout<<-1<<endl;
    else{
        cout<<vp.size()<<endl;
        for(ll i=0;i<vp.size();i++){
            cout<<vp[i].first+1<<" "<<vp[i].second+1<<endl;
        }
    }
    return 0;
}
