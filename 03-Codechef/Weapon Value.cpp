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
        string s[n];
        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        string x=s[0];
        for(ll i=1;i<n;i++){
            string y=s[i];
            for(ll i=0;i<10;i++){
                if(x[i]==y[i]&&x[i]=='1') x[i]='0';
                else if(x[i]==y[i]&&x[i]=='0') x[i]='0';
                else x[i]='1';
            }
        }
        ll cnt=0;
        for(ll i=0;i<10;i++) if(x[i]=='1') cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
