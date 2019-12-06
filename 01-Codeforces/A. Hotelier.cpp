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
    int ar[11];
    memset(ar,0,sizeof(ar));

    for(ll i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='L'){
            for(ll i=0;i<=9;i++){
                if(ar[i]==0){
                    ar[i]=1;
                    break;
                }
            }
        }
        else if(ch=='R'){
            for(ll i=9;i>=0;i--){
                if(ar[i]==0){
                    ar[i]=1;
                    break;
                }
            }
        }
        else{
            ll x=s[i]-'0';
            ar[x]=0;
        }
        /*for(ll i=0;i<=9;i++){
            cout<<ar[i];
        }
        cout<<endl;*/
    }
    for(ll i=0;i<=9;i++){
        cout<<ar[i];
    }
    cout<<endl;
    return 0;
}
