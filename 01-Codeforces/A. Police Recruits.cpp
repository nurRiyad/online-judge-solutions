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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll cnt=0,po=0;
    for(ll i=0;i<n;i++){
        if(v[i]<0){
            if(po>0) po--;
            else cnt++;
        }
        else{
            po+=v[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}

