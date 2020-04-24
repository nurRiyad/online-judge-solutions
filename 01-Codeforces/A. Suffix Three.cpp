#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string ss=s.substr(s.size()-2,2);
        if(ss=="po"){
            cout<<"FILIPINO"<<endl;
            continue;
        }
        ss=s.substr(s.size()-4,4);
        if(ss=="masu"||ss=="desu"){
            cout<<"JAPANESE"<<endl;
            continue;
        }
        else cout<<"KOREAN"<<endl;
    }
    return 0;
}