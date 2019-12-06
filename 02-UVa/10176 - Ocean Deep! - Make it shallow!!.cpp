#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod(ll a,ll b,ll c){
    if(b==0) return 1%c;
    ll x=bigmod(a,b/2,c);
    x=(x*x)%c;
    if(b%2==1) x=(x*a)%c;
    return x;
}

int main()
{
    char a;
    string s;
    while(cin>>a){
        if(a==-1) break;
        if(a!='#'){
            s.push_back(a);
        }
        else{
            ll sum=0;
            for(int i=0;i<s.size();i++){
                if(s[i]!='0'){
                    int x=s.size()-i;
                    int y=bigmod(2,x,131071);
                    sum+=y;
                }
            }
            if(sum%131071==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            s.clear();
        }
    }
    return 0;
}

