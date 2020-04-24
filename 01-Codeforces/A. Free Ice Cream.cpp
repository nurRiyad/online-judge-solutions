#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,i;
    cin>>n>>i;
    ll cnt=0;
    while(n--){
        string s;
        ll a;
        cin>>s>>a;
        if(s=="+") i+=a;
        else{
            if(a>i) cnt++;
            else i-=a;
        }
    }
    cout<<i<<" "<<cnt<<endl;
    return 0;
}

