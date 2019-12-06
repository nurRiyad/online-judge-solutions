#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ar[n+10];
    ll br[n+10];
    memset(br,0,sizeof(br));
    memset(ar,0,sizeof(ar));
    ll cnt=1;
    ar[0]=1;
    br[n-1]=1;
    for(ll i=1;i<n;i++){
        if(s[i]==s[i-1]||s[i-1]=='w'||s[i]=='w'){
            cnt++;
            ar[i]=cnt;
        }
        else{
            cnt=1;
            ar[i]=1;
        }
    }
    cnt=1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]==s[i+1]||s[i+1]=='w'||s[i]=='w'){
            cnt++;
            br[i]=cnt;
        }
        else{
            cnt=1;
            br[i]=1;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    for(ll i=0;i<n;i++){
        cout<<br[i]<<" ";
    }
    cout<<endl;
    return 0;
}

