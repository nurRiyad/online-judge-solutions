#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll m,n;
    cin>>m>>n;
    string s;
    cin>>s;
    ll ar[30];
    memset(ar,0,sizeof(ar));
    for(ll i=0;i<n;i++){
        char ch;
        cin>>ch;
        ll x=ch-'a';
        ar[x]++;
    }
    ll ans=0,cnt=0;
    for(ll i=0;i<s.size();i++){
        ll x=s[i]-'a';
        if(ar[x]>0) cnt++;
        else{
            ans+=((cnt*(cnt+1))/2);
            cnt=0;
        }
    }
    if(cnt>0) ans+=((cnt*(cnt+1))/2);
    cout<<ans<<endl;
    return 0;
}

