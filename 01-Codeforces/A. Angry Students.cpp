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
        string s;
        cin>>s;
        bool flag=false;
        ll cnt=0,ans=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='A'){
                ans=max(ans,cnt);
                cnt=0;
                flag=true;
            }
            if(flag&&s[i]=='P'){
                cnt++;
                ans=max(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

