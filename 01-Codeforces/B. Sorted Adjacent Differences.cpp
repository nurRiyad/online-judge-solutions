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
        vector<ll> v(n),ans;
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        //for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        //cout<<endl;
        if(n%2==0){
            for(ll i=(n/2)-1,j=n/2;i>=0&&j<n;i--,j++){
                ans.push_back(v[i]);
                ans.push_back(v[j]);
            }
        }
        else{
            ans.push_back(v[n/2]);
            for(ll i=(n/2)-1,j=(n/2)+1;i>=0&&j<n;i--,j++){
                ans.push_back(v[i]);
                ans.push_back(v[j]);
            }
        }
        for(ll i=0;i<ans.size();i++){
            if(i==ans.size()-1) cout<<ans[i]<<endl;
            else cout<<ans[i]<<" ";
        }
    }
    return 0;
}
