#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m,k,x;
    cin>>n>>m>>k;
    for(ll i=0;i<k;i++) cin>>x>>x;
    for(ll i=0;i<k;i++) cin>>x>>x;
    string s;
    for(ll i=0;i<n-1;i++) s+="U";
    for(ll i=0;i<m-1;i++) s+="L";
    for(ll i=0;i<n;i++){
        if(i%2==0){
            for(ll j=0;j<m-1;j++){
                s+="R";
            }
            if(i!=n-1) s+="D";
        }
        else{
            for(ll j=0;j<m-1;j++){
                s+="L";
            }
            if(i!=n-1) s+="D";
        }
    }
    cout<<s.size()<<" "<<s<<endl;
    return 0;
}
