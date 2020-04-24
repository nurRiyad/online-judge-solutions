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
        ll a,b;
        cin>>a>>b;
        ll d=abs(a-b);
        ll cnt=0,sum=0;
        for(ll i=1;;i++,cnt++){
            if(sum>=d){
                ll x=sum-d;
                //cout<<"here x " <<x<<endl;
                if(x%2==0) break;
            }
            sum+=i;

        }
        cout<<cnt<<endl;
    }
    return 0;
}

