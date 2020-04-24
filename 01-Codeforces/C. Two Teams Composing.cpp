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
        ll u=0,s=0;
        set<ll> st;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            st.insert(a);
            mp[a]++;
            s=max(s,mp[a]);
        }
        u=st.size();
        ll dif=abs(u-s);
        if(dif>1){
            cout<<min(u,s)<<endl;
        }
        else{
            if(u==s) cout<<s-1<<endl;
            else if(u>s) cout<<min(u-1,s)<<endl;
            else cout<<min(u,s-1)<<endl;
        }
    }
    return 0;
}
