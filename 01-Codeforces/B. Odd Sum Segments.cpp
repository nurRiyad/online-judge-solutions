#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,k,od=0,ev=0;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) ev++;
            else od++;
        }
        if(n<k){
            cout<<"NO"<<endl;
            continue;
        }
        if(od<k||od%2!=k%2){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            vector<ll> ans;
            cout<<"YES"<<endl;
            for(ll i=0;i<v.size();i++){
                if(v[i]%2==1) ans.push_back(i+1);
            }
            k--;
            for(int i=0;i<ans.size()&&i<k;i++){
                cout<<ans[i]<<" ";
            }
            cout<<n<<endl;
        }
    }
    return 0;
}
