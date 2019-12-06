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
        ll cnt=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1') cnt++;
        }
        cout<<((cnt*(cnt+1))/2)<<endl;
    }
    return 0;
}
