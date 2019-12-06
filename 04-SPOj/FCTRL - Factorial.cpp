#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll two(ll n){
    ll cnt=0,i=2;
    while(n/i>0){
        cnt+=n/i;
        i=i*2;
    }
    return cnt;
}

ll five(ll n){
    ll cnt=0,i=5;
    while(n/i>0){
        cnt+=n/i;
        i=i*5;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,d2=0,d5=0;
        cin>>n;
        d2=two(n);
        d5=five(n);
        cout<<min(d2,d5)<<endl;
    }
    return 0;
}
