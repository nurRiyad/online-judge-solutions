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
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;

        set<ll> st;

        for(ll i=0;i<(n-2);i++){
            if(s[i]==s[i+1]||s[i+1]==s[i+2]||s[i]==s[i+2]) st.insert(i);
        }

        while(q--){
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            bool ans=false;
            auto it=st.upper_bound(l-1);
            if(it!=st.end()&&(*it+2<=r)) ans=true;
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
