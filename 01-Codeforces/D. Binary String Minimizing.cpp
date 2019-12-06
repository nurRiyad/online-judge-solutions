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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll x=0;
        for(ll i=0;i<s.size()&&k>0;i++){
            if(s[i]=='0'){
                ll dis=(i+1)-(x+1);
                //cout<<"dis="<<dis<<endl;
                if(i==x){
                    x++;
                }
                else if(dis<=k){
                    swap(s[x],s[i]);
                    k=k-dis;
                    x=x+1;
                }
                else break;
            }
        }
        for(ll i=x+1;i<s.size()&&s[x]!=0;i++){
            if(s[i]=='0'){
                ll x=i-k;
                swap(s[i],s[x]);
                break;
            }
        }
        //cout<<x<<endl;
        //cout<<k<<endl;
        cout<<s<<endl;
    }
    return 0;
}
