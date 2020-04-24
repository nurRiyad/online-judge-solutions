#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,a;
    cin>>n>>a;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll cnt=0;
    for(ll i=(a*2)-1;i<n;i++){
        if(v[i]==1) cnt++;
    }
    for(ll i=0;i<(a-(n-a))-1;i++){
        //cout<<"riyad="<<i<<endl;
        if(v[i]==1) cnt++;
    }
    if(v[a-1]==1) cnt++;
    for(ll i=a-2,j=a;i>=0||j<n;i--,j++){
        if(v[i]==v[j]&&v[i]==1) cnt+=2;
    }
    cout<<cnt<<endl;
    return 0;
}
