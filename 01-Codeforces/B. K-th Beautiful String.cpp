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
        ll a,b;
        cin>>a>>b;
        ll x=0,cnt=0;
        for(ll i=1;x<b;i++){
            x+=i;
            cnt++;
        }
        string s;
        ll len=(a-2)-(cnt-1);
        for(ll i=0;i<=(a-2);i++){
            if(i==len) s+="b";
            else s+="a";
        }
        s+="b";
        ll r=b-((cnt*(cnt-1))/2)-1;
        //cout<<r<<endl;
        for(ll i=s.size()-1,j=0;i>=0;i--,j++){
            if(j==r){
                swap(s[i],s[s.size()-1]);
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
