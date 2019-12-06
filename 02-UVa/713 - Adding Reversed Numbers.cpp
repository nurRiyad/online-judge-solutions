#include<bits/stdc++.h>
#define ll long long
using namespace std;

string add(string a,string b){
    if(a.size()<b.size()){
        swap(a,b);
    }
   ll cr=0,i;
   string res;
   for(i=0;i<min(a.size(),b.size());i++){
        ll x=(a[i]-'0')+(b[i]-'0')+cr;
        res.push_back((x%10)+'0');
        cr=x/10;
   }
   for(i;i<a.size();i++){
        ll x=(a[i]-'0')+cr;
        res.push_back((x%10)+'0');
        cr=x/10;
   }
   if(cr>0) res.push_back(cr+'0');
   return res;
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
        string a,b;
        cin>>a>>b;
        //reverse(a.begin(),a.end());
        //reverse(b.begin(),b.end());
        string s=add(a,b);
        string ans;
        bool flag=false;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0'&&flag==false) continue;
            else{
                flag=true;
                ans.push_back(s[i]);
            }
        }
        //reverse(s.begin(),s.end());
        cout<<ans<<endl;
    }
    return 0;
}

