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
        string a,b;
        a+="1";
        b+="1";
        bool af=false,bf=false;
        for(ll i=1;i<s.size();i++){
            if(s[i]=='2'){
                if(af==false&&bf==false){
                    a+="1";
                    b+="1";
                }
                else{
                    a+="0";
                    b+="2";
                }
            }
            if(s[i]=='1'){
                if(af==false&&bf==false){
                    a+="1";
                    b+="0";
                    af=true;
                }
                else{
                    a+="0";
                    b+="1";
                }
            }
            if(s[i]=='0'){
                a+="0";
                b+="0";
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}
