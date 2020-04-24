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
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a!=0) v.push_back(a);
        }
        sort(v.begin(),v.end());
        bool flag=true;
        if(v.size()==0){
            cout<<"YES"<<endl;
            continue;
        }
        for(ll i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
            continue;
        }
        map<ll,ll> mp;
        for(ll i=0;i<v.size();i++){
            ll x=v[i];
            ll pos=0;
            while(x>0){
                if(x%k>1){
                    flag=false;
                    break;
                }
                if(x%k==1){
                    //cout<<"here pos="<<pos<<endl;
                    if(mp.count(pos)){
                        flag=false;
                        break;
                    }
                    else mp[pos]++;
                }
                x=x/k;
                pos++;
            }
            if(flag==false) break;
        }
        if(flag==false) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
