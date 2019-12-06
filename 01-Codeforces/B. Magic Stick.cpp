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
        ll x,y;
        cin>>x>>y;
        if(x==y&&y<x){
            cout<<"YES"<<endl;
            continue;
        }
        else if(x==1&&y>x){
            cout<<"NO"<<endl;
            continue;
        }
        else if(x==2&&y>3){
            cout<<"NO"<<endl;
            continue;
        }
        else if(x==3&&y>x){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            continue;
        }


    }
    return 0;
}

