#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll x,p;
    cin>>x>>p;
    vector<ll> prime;
    for(ll i=2;i<=x/2;i++){
        if(x%i==0){
            while(x%i==0){
                x=x/i;
            }
            prime.push_back(i);
        }
    }
    if(x>1) prime.push_back(x);
    for(ll i=0;i<prime.size();i++) cout<<prime[i]<<" "<<endl;
    return 0;
}
