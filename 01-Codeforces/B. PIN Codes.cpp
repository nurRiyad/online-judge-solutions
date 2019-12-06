#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll> mp;

string change(string s){
    ll cnt=0;
    for(ll i=0;i<4;i++){
        for(ll j=0;j<10;j++){
            s[i]=j+'0';
            if(mp.find(s)==mp.end()){
                mp[s]++;
                return s;
            }
        }
        if(mp.find(s)==mp.end()){
            mp[s]++;
            return s;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        mp.clear();
        ll n;
        cin>>n;
        vector<string> s(n);
        for(ll i=0;i<n;i++){
            cin>>s[i];
            mp[s[i]]++;
        }
        ll cnt=0;
        for(ll i=0;i<n-1;i++){
            if(mp[s[i]]!=1){
                cnt++;
                mp[s[i]]--;
                s[i]=change(s[i]);
            }
        }
        cout<<cnt<<endl;
        for(ll i=0;i<n;i++){
            cout<<s[i]<<endl;
        }
    }
    return 0;
}

