#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m;
    cin>>n>>m;
    bool flag=false;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            char ch;
            cin>>ch;
            if(ch!='W'&&ch!='B'&&ch!='G') flag=true;
        }
    }
    if(flag) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
    return 0;
}

