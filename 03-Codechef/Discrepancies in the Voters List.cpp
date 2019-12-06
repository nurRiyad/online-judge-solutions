#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n1,n2,n3;
    map<ll,ll> unmp;
    cin>>n1>>n2>>n3;
    for(ll i=0;i<(n1+n2+n3);i++){
        ll x;
        cin>>x;
        unmp[x]++;
    }
    vector<ll> ans;
    ll cnt=0;
    for(auto it:unmp){
        if(it.second>=2){
            cnt++;
            ans.push_back(it.first);
        }
    }
    cout<<cnt<<endl;
    for(ll i=0;i<ans.size();i++) cout<<ans[i]<<endl;
    return 0;
}
