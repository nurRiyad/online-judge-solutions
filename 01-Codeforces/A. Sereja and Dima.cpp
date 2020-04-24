#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll a=0,b=0;
    ll i=0,j=n-1;
    ll cnt=0;
    while(j>=i){
        if(++cnt%2==1){
            if(v[i]>=v[j]){
                a+=v[i];
                i++;
            }
            else{
                a+=v[j];
                j--;
            }
        }
        else{
            if(v[i]>=v[j]){
                b+=v[i];
                i++;
            }
            else{
                b+=v[j];
                j--;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}

