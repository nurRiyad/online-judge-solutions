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
        vector<ll> v;
        v.push_back(0);
        for(ll i=1;i<=sqrt(n);i++){
            if(n/i==i) v.push_back(i);
            else {
                v.push_back(n/i);
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
        cout<<v[v.size()-1]<<endl;
    }
    return 0;
}

