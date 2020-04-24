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
        vector<ll> v(n+1);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll> r;
        r.push_back(1);
        ll cnt=1;
        set<ll> st;
        st.insert(1);
        for(ll i=1;i<n;i++){
            if(i!=n-1){
                if(v[i]==v[i-1]){
                    r.push_back(r[i-1]);
                    st.insert(r[i-1]);
                }
                else{
                    if(r[i-1]==1){
                        r.push_back(2);
                        st.insert(2);
                    }
                    else{
                        r.push_back(1);
                        st.insert(1);
                    }
                }
            }
            else{
                if(v[i]==v[i-1]&&v[i]==v[0]){
                    r.push_back(r[i-1]);
                    st.insert(r[i-1]);
                }
                else if(v[i]==v[i-1]&&v[i]!=v[0]){
                    r.push_back(2);
                    st.insert(2);
                }
                else if(v[i]!=v[i-1]&&v[i]==v[0]){
                    r.push_back(1);
                    st.insert(1);
                }
                else{
                    r.push_back(3);
                    st.insert(3);
                }
            }
        }
        cout<<st.size()<<endl;
        for(ll i=0;i<r.size();i++){
            cout<<r[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
