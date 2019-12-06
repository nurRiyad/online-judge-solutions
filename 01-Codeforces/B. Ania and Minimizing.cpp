#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0){
        cout<<s<<endl;
        return 0;
    }
    if(s.size()==1){
        cout<<0<<endl;
        return 0;
    }
    for(ll i=0;i<s.size();i++){
        ll x=s[i]-'0';
        if(i==0&&x>1){
            k--;
            s[i]='1';
        }
        if(i!=0&&x>0){
            k--;
            s[i]='0';
        }
        if(k<=0) break;
    }
    cout<<s<<endl;
    return 0;
}
