#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a,b;
    cin>>a>>b;
    ll cnt=0;
    for(ll i=0;i<b.size();i++){
        if(a[i]==b[i]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
