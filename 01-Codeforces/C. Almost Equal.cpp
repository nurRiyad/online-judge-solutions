#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    if(n%2==0) cout<<"NO"<<endl;
    else {
        vector<ll> a,b;
        cout<<"YES"<<endl;
        bool flag=true;
        for(ll i=1;i<=2*n;i+=2){
            if(flag){
                a.push_back(i);
                b.push_back(i+1);
                flag=false;
            }
            else{
                a.push_back(i+1);
                b.push_back(i);
                flag=true;
            }
        }
        for(ll i=0;i<a.size();i++) cout<<a[i]<<" ";
        for(ll i=0;i<b.size();i++) cout<<b[i]<<" ";
    }
    return 0;
}
