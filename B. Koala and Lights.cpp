#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    int ar[210][210];
    string ss;
    cin>>ss;
    for(ll i=0;i<ss.size();i++){
        if(ss[i]=='1') ar[i][0]=1;
        else ar[i][0]=0;
    }
    for(ll i=0;i<n;i++){
        ll a,b,x;
        cin>>a>>b;
        for(ll j=1;j<b;j++){
            ar[i][j]=ar[i][j-1];
        }
        if(ar[i][0]==0) x=1;
        else x=0;
        for(ll j=b,k=1;j<200;j++,k++){
                ar[i][j]=x;
                if(k==a){
                    k=0;
                    if(x==0) x=1;
                    else x=0;
                }
        }
        //for(ll j=0;j<20;j++) cout<<ar[i][j]<<" ";
        //cout<<endl;
    }
    ll mx=-1;
    for(ll i=0;i<200;i++){
        ll cnt=0;
        for(ll j=0;j<n;j++){
            cnt+=ar[j][i];
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}
