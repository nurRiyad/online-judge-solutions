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
        ll a,b,c,x;
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                x=i+1;
                a=i;
                n=n/i;
                break;
            }
        }
        bool flag=false;
        for(ll i=x;i<=sqrt(n);i++){
            if(n%i==0&&n/i!=a&&i!=n/i){
                b=i;
                c=n/i;
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
