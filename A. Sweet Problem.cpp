#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ll n;
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    return 0;
}
