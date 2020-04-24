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
        ll a;
        cin>>a;
        if(a<=2){
            cout<<0<<endl;
            continue;
        }
        if(a%2==1) cout<<a/2<<endl;
        else cout<<(a/2)-1<<endl;

    }
    return 0;
}
