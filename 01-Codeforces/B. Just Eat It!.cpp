#include<bits/stdc++.h>
#define ll long long
using namespace std;


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
        vector<ll> v(n);
        ll ng=0,pg=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>0) pg++;
            else if(v[i]<0) ng++;
        }
        if(pg>0&&ng==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

