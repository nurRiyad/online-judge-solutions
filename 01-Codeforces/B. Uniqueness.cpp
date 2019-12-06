#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    vector<ll> v(n);
    set<ll> st;
    unordered_map<ll ,ll> unmp1,temp;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        ll x=v[i];
        st.insert(x);
        unmp1[x]++;
    }
    if(v.size()==st.size()){
        cout<<0<<endl;
        return 0;
    }
    ll Min=n;
    //Check all possible segment to delete from the array
    for(ll i=0;i<n;i++){
        temp=unmp1;
        ll distinct=st.size();
        for(ll j=i;j<n;j++){
            ll x=v[j];
            temp[x]--;
            if(temp[x]==0) distinct--;
            ll length=j-i+1;
            if(distinct==n-length) Min=min(Min,length);
        }

    }
    cout<<Min<<endl;
    return 0;
}
