#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[70];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ar[0]=0;
    ar[1]=1;
    for(ll i=2;i<66;i++){
        ar[i]=(ar[i-1]+ar[i-2])%10;
    }
    //for(ll i=0;i<66;i++) cout<<i<<"=="<<ar[i]<<endl;
    //cout<<endl;

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=(ll)log2(n);
        ll y=pow(2,x);
        y=y-1;
        ll z=y%60;
        cout<<ar[z]<<endl;

    }
    return 0;
}
