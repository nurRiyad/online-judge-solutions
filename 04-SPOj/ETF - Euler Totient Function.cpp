#include<bits/stdc++.h>
using namespace std;
#define ll long long


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
        ll result=n;
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                while(n%i==0){
                    n=n/i;
                }
                result=result-(result/i);
            }
        }
        if(n>1){
            result=result-(result/n);
        }
        cout<<result<<endl;
    }
    return 0;
}
