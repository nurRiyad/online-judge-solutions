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
        string s;
        cin>>s;
        bool flag1=false,flag2=false,flag3=false;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0'){
                flag1=true;
                break;
            }
        }
        ll cnt=0;
        for(ll i=0;i<s.size();i++){
            ll x=s[i]-'0';
            cnt+=x;
        }
        if(cnt%3==0) flag2=true;
        ll cnt1=0;
        for(ll i=0;i<s.size();i++){
            ll x=s[i]-'0';
            if(x==0) cnt1++;
            if(cnt1>1){
                flag3=true;
                break;
            }
            if(x%2==0&&x!=0){
                flag3=true;
                break;
            }
        }
        if(flag1&&flag2&&flag3) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
    return 0;
}

