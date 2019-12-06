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
        ll n,sum=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll k;
        cin>>k;
        ll a=k,b=1;
        while(a+b<sum){
            a+=k;
            b+=1;
        }
        //cout<<a<<" "<<b<<"\n";
        ll x=0,y=0,p=0,q=0;
        for(ll i=0;i<v.size();i++){
            x+=v[i];
            if(x>=a){
                break;
            }
            else{
                p++;
            }
        }
        for(ll i=v.size()-1;i>=0;i--){
            y+=v[i];
            if(y>=b){
                break;
            }
            else{
                q++;
            }
        }
        if(p>=q) p++;
        else if(q>p) q++;
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
