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
        if(a==b||(a-b)==2){
            if(a==b){
                if(a%2==0) cout<<a+a<<endl;
                else cout<<a+a-1<<endl;
            }
            else{
                if(a%2==0) cout<<a+b<<endl;
                else cout<<a+b-1<<endl;
            }
        }
        else{
            cout<<"No Number"<<endl;
        }
    }
    return 0;
}
