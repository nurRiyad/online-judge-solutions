#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll q;
    cin>>q;
    while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2==0) cout<<(a+b+c)/2<<endl;
        else{
            cout<<((a+b+c)/2)<<endl;
        }
    }
    return 0;
}
