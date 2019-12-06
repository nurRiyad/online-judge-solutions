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
            if(s=="?"){
                cout<<"a"<<endl;
                continue;
            }
            else{
                cout<<s<<endl;
                continue;
            }
        }
        bool flag=false;
        for(ll i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]&&s[i]!='?'){
                flag=true;
                cout<<-1<<endl;
                break;
            }
        }
        if(flag) continue;
        for(ll i=0;i<s.size();i++){
            //cout<<"riyad"<<endl;
            if(s[i]=='?'){
                if(i==0){
                    if(s[i+1]=='a') s[i]='b';
                    if(s[i+1]=='b') s[i]='a';
                    if(s[i+1]=='c') s[i]='a';
                }
                else if(i==s.size()-1){
                    if(s[i-1]=='a') s[i]='b';
                    if(s[i-1]=='b') s[i]='a';
                    if(s[i-1]=='c') s[i]='a';
                }
                else{
                    if((s[i-1]=='a'||s[i-1]=='b'||s[i-1]=='?')&&(s[i+1]=='a'||s[i+1]=='b'||s[i+1]=='?')) s[i]='c';
                    else if((s[i-1]=='a'||s[i-1]=='c'||s[i-1]=='?')&&(s[i+1]=='a'||s[i+1]=='c'||s[i+1]=='?')) s[i]='b';
                    else if((s[i-1]=='b'||s[i-1]=='c'||s[i-1]=='?')&&(s[i+1]=='b'||s[i+1]=='c'||s[i+1]=='?')) s[i]='a';
                }
            }
            else continue;
        }
        cout<<s<<endl;
    }
    return 0;
}

