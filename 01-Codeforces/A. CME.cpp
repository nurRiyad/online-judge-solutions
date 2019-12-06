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
        ll n;
        cin>>n;
        if(n<4) cout<<4-n<<endl;
        else if(n%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
