#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_unick(string s){
    sort(s.begin(),s.end());
    for(ll i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) return false;
    }
    return  true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll l,r;
    cin>>l>>r;
    bool flag=true;
    for(ll i=l;i<=r;i++){
        ll x=i;
        string s;
        stringstream ss;
        ss<<x;
        ss>>s;
        if(is_unick(s)){
            cout<<s<<endl;
            flag=false;
            break;
        }
    }
    if(flag) cout<<-1<<endl;
    return 0;
}
