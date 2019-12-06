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
        ll n,k,s=0;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];
        }
        ll s1=0,s2=0;
        sort(v.begin(),v.end());
        for(ll i=0;i<k;i++){
            s1+=v[i];
        }
        for(ll i=v.size()-1,j=0;i>=0;i--,j++){
           if(j<k) s2+=v[i];
        }
        cout<<max(abs(s1-(s-s1)),abs(s2-(s-s2)))<<endl;
    }
    return 0;
}
