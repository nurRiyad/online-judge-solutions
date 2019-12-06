#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 111111
ll ar[mx+10];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll last=mx;
    for(ll i=mx-1;i>=1;i--){
        string s;
        stringstream ss;
        ss<<i;
        ss>>s;
        bool pal=true;
        ll len;
        if(s.size()%2==0) len=s.size()/2;
        else len=s.size()/2+1;
        for(ll j=0;j<s.size()/2;j++){
            if(s[j]!=s[j+len]){
                pal=false;
                break;
            }
        }
        if(pal){
            ar[i]=last;
            last=i;
        }
        else{
            ar[i]=last;
        }
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<ar[n]<<endl;
    }
    return 0;
}
