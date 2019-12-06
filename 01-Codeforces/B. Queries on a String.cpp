#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin>>s;
    ll n;
    cin>>n;
    while(n--){
        ll l,k,r;
        string ss=s;
        cin>>l>>r>>k;
        ll len=r-l+1;
        if(k%len==0) continue;
        else{
            k=k%len;
            ll cnt=0;
            for(ll i=l-1,j=l-1;i<=r-1;i++){
                ll x=i+k;
                if(x<=r-1){
                    ss[x]=s[i];
                }
                else{
                    ss[j]=s[i];
                    j++;
                }
            }
        }
        s=ss;
    }
    cout<<s<<endl;
    return 0;
}

