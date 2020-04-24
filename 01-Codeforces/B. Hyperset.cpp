#include<bits/stdc++.h>
#define ll long long
using namespace std;

string need(string a,string b){
    string ans;
    for(ll i=0;i<a.size();i++){
        if(a[i]==b[i]) ans.push_back(a[i]);
        else if(a[i]!='T'&&b[i]!='T') ans.push_back('T');
        else if(a[i]!='S'&&b[i]!='S') ans.push_back('S');
        else if(a[i]!='E'&&b[i]!='E') ans.push_back('E');
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k,cnt=0;
    cin>>n>>k;
    vector<string> s(n);
    map<string,ll> mp;
    map<string,ll> mp1;
    for(ll i=0;i<n;i++){
        cin>>s[i];
        mp[s[i]]++;
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            string sa=s[i]+s[j];
            if(mp1.find(sa)!=mp1.end()) continue;
            string ss=need(s[i],s[j]);
            //cout<<"here is ="<<ss<<endl;
            if(mp.find(ss)!=mp.end()){
                cnt++;
                mp1[sa]++;
                string sb=s[i]+ss;
                string sc=s[j]+ss;
                mp1[sb]++;
                mp1[sc]++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

