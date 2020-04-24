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
    string s,ns;
    cin>>s;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0'||s[i]=='1') continue;
        else if(s[i]=='2') ns.push_back('2');
        else if(s[i]=='3') ns.push_back('3');
        else if(s[i]=='4'){
            ns.push_back('2');
            ns.push_back('2');
            ns.push_back('3');
        }
        else if(s[i]=='5') ns.push_back('5');
        else if(s[i]=='6'){
            ns.push_back('5');
            ns.push_back('3');
        }
        else if(s[i]=='7'){
            ns.push_back('7');
        }
        else if(s[i]=='8'){
            ns.push_back('7');
            ns.push_back('2');
            ns.push_back('2');
            ns.push_back('2');
        }
        else{
            ns.push_back('7');
            ns.push_back('3');
            ns.push_back('3');
            ns.push_back('2');
        }
    }
    sort(ns.rbegin(),ns.rend());
    cout<<ns<<endl;
    return 0;
}
