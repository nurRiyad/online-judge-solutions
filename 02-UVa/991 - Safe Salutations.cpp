#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[20];

void catalan()
{
    ar[0]=1;
    ar[1]=1;
    for(ll i=2;i<15;i++){
        ar[i]=0;
        for(ll j=0;j<i;j++){
            ar[i]+=(ar[j]*ar[i-j-1]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    catalan();
    ll t,cnt=0;
    while(cin>>t){
        if(cnt!=0) cout<<endl;
        cnt++;
        cout<<ar[t]<<endl;
    }
    return 0;
}

