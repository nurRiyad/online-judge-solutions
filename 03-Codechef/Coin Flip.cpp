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
        ll g;
        cin>>g;
        while(g--){
            ll i,n,g;
            cin>>i>>n>>g;
            ll tail=ceil(n/2.0);
            ll head=floor(n/2.0);
            if(i==g) cout<<head<<endl;
            else cout<<tail<<endl;
        }
    }
    return 0;
}
