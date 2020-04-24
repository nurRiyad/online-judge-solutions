#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100100
ll ar[mx+10];

int main(){
    ll n,q,ans=0;
    cin>>n>>q;
    while(n--){
        ll a;
        cin>>a;
        ar[a%q]++;
        while(true){
            if(ar[ans%q]){
                ar[ans%q]--;
                ans++;
            }
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
