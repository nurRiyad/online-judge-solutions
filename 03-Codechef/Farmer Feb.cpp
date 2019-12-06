#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool prime(ll a){
    if(a==1) return false;
    for(ll i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
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
        ll a,b;
        cin>>a>>b;
        ll sum=a+b;
        for(ll i=sum+1;;i++){
            if(prime(i)){
                cout<<i-sum<<endl;
                break;
            }
        }
    }
    return 0;
}
