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
        string stone,jwul;
        cin>>jwul>>stone;
        map<char,ll> mp;
        for(ll i=0;i<stone.size();i++){
            char ch=stone[i];
            mp[ch]++;
        }
        ll cnt=0;
        for(ll i=0;i<jwul.size();i++){
            char x=jwul[i];
            if(mp[x]>0){
                cnt++;
                mp[x]--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
