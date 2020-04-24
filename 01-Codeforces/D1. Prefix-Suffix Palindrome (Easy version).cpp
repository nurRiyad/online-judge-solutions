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
        if(s.size()==1){
            cout<<s<<endl;
            continue;
        }
        if(s.size()==2){
            if(s[0]==s[1]) cout<<s<<endl;
            else cout<<s[0]<<endl;
            continue;
        }
        string cmn,suf,prf;
        ll ii=0;
        ll jj=s.size()-1;
        for(ii,jj;ii<jj;ii++,jj--){
            if(s[ii]==s[jj]){
                cmn.push_back(s[ii]);
            }
            else break;
        }
        string ss,rcmn=cmn;
        reverse(rcmn.begin(),rcmn.end());
        for(ll i=ii;i<=jj;i++){
            ss.push_back(s[i]);
        }
        if(ss.size()==0){
            cout<<cmn<<rcmn<<endl;
            continue;
        }
        string rss=ss;
        reverse(rss.begin(),rss.end());
        if(ss==rss){
            cout<<cmn<<rss<<rcmn<<endl;
            continue;
        }
        //cout<<cmn<<" "<<ss<<endl;
        string ans1,ans2;
        //cout<<ss<<endl;
        for(ll i=ss.size()-1;i>=0;i--){
            string subs=ss.substr(0,i+1);
            //cout<<"here="<<subs<<endl;
            string rsubs=subs;
            reverse(rsubs.begin(),rsubs.end());
            if(subs==rsubs){
                ans1=subs;
                break;
            }
        }
        for(ll i=0;i<ss.size();i++){
            string subs=ss.substr(i,ss.size());
            //cout<<"here="<<subs<<endl;
            string rsubs=subs;
            reverse(rsubs.begin(),rsubs.end());
            if(subs==rsubs){
                ans2=subs;
                break;
            }
        }
        //cout<<ans1<<" "<<ans2<<" "<<cmn<<endl;
        if(ans1.size()>=ans2.size()) cout<<cmn<<ans1<<rcmn<<endl;
        else cout<<cmn<<ans2<<rcmn<<endl;
    }
    return 0;
}
