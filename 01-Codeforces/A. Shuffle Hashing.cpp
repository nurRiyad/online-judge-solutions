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
        string a,b;
        cin>>a>>b;
        if(a.size()>b.size()){
            cout<<"no"<<endl;
            continue;
        }
        if(a.size()==b.size()){
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a==b) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
            continue;
        }
        bool flag=false;
        string sa=a;
        sort(sa.begin(),sa.end());
        for(ll i=0;i+a.size()<=b.size();i++){
            string ss=b.substr(i,a.size());
            sort(ss.begin(),ss.end());
            if(ss==sa){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

