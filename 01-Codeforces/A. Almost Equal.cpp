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
    vector<ll> a,b;
    bool flag=true;
    ll sum1=0,sum2=0;
    for(ll i=1;i<=2*n;i+=2){
        if(flag){
            a.push_back(i);
            sum1+=i;
            b.push_back(i+1);
            sum2+=i+1;
            flag=false;
        }
        else{
            b.push_back(i);
            sum2+=i;
            a.push_back(i+1);
            sum1+=i+1;
            flag=true;
        }
    }

    if(abs(sum1-sum2)<=1){
        cout<<"YES"<<endl;
        for(ll i=0;i<a.size();i++) cout<<a[i]<<" ";
        for(ll i=0;i<b.size()-1;i++) cout<<b[i]<<" ";
        cout<<b[b.size()-1]<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
