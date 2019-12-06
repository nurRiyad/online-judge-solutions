#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 9876543210LL

bool chk(ll a){
    int ar[10];
    memset(ar,0,sizeof(ar));
    while(a>0){
       ll x=a%10;
       a=a/10;
       if(ar[x]==0) ar[x]=1;
       else return false;
    }
    return true;
}

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
        for(ll i=1;i*n<=mx;i++){
            if(chk(i)&&chk(i*n)){
                cout<<i*n<<" / "<<i<<" = "<<n<<endl;
            }
        }
        if(t!=0) cout<<endl;
    }
    return 0;
}
