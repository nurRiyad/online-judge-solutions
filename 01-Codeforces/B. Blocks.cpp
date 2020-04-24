#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cntw=0,cntb=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='W') cntw++;
        else cntb++;
    }
    if(cntw%2==1&&cntb%2==1){
        cout<<-1<<endl;
        return 0;
    }
    if(cntw==0||cntb==0){
        cout<<0<<endl;
        return 0;
    }
    vector<ll> ans;
    for(ll i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]&&s[i]=='B') continue;
        else if(s[i]=='B'&&s[i+1]=='W') continue;
        else if(s[i]=='W'&&s[i+1]=='B'){
            ans.push_back(i+1);
            s[i]='B';
            s[i+1]='W';
        }
        else{
            ans.push_back(i+1);
            s[i]='B';
            s[i+1]='B';
        }
    }
    if(s[s.size()-1]!=s[s.size()-2]){
        for(ll i=s.size()-2;i>=0;i-=2) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size()-1;i++) cout<<ans[i]<<" ";
    cout<<ans[ans.size()-1]<<endl;
    //cout<<s<<endl;
    return 0;
}

