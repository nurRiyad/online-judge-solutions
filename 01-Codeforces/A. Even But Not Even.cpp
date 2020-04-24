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
        string s,ss;
        cin>>s;
        ll od=0,ind;
        bool flag=true;
        for(ll i=0;i<s.size();i++){
            ll x=s[i]-'0';
            if(x%2==1){
                od++;
                if(od%2==0){
                    flag=false;
                    ind=i;
                    break;
                }
            }
        }
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        else{
            for(ll i=0;i<=ind;i++){
                cout<<s[i];
            }cout<<endl;
        }
    }
    return 0;
}
