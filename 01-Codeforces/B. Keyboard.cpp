#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m,x;
    cin>>n>>m>>x;
    char ar[n+1][m+1];
    map<char,ll> mp;
    map<char,ll> mp1;
    vector<pair<ll,ll> > vp;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>ar[i][j];
            if(ar[i][j]=='S') vp.push_back({i,j});
            mp[ar[i][j]]++;
        }
    }
    x=x*x;
    ll q;
    cin>>q;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            char ch=ar[i][j];
            if(ch!='S'){
                ll x1=i;
                ll y1=j;
                ll mindis=INT_MAX;
                for(ll k=0;k<vp.size();k++){
                    ll x2=vp[k].first;
                    ll y2=vp[k].second;
                    ll dis=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
                    mindis=min(mindis,dis);
                }
                //cout<<"here="<<ch<<"=="<<mindis<<endl;
                if(mp1.count(ch)){
                    ll x=mp1[ch];
                    mp1[ch]=min(x,mindis);
                }
                else mp1[ch]=mindis;
            }
        }
    }
    bool flag=true;
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        char ch=s[i];
        if(ch>='a'&&ch<='z'){
            if(mp.count(ch)) continue;
            else{
                flag=false;
                break;
            }
        }
        else{
            if(mp.count(ch+32)){
                if(vp.size()==0){
                    flag=false;
                    break;
                }
                else{
                    if(mp1[ch+32]>x) cnt++;
                    else continue;
                }
            }
            else{
                flag=false;
                break;
            }
        }
    }
    if(flag) cout<<cnt<<endl;
    else cout<<-1<<endl;
    return 0;
}
