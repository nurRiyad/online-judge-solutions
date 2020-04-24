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
        if(b>a){
            cout<<"NO"<<endl;
            continue;
        }
        if(b*b>a){
            cout<<"NO"<<endl;
            continue;
        }
        if(a%2==0){
            if(b%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(b%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
