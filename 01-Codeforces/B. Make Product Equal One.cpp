#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,t=0,z=0,ne=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x>0) t+=x-1;
        else if(x<0) t+=-1-x,ne++;
        else t++,z++;
    }
    if(ne%2==1&&z==0){
        t+=2;
    }
    cout<<t<<endl;
    return 0;
}
