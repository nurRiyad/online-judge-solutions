#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll pw(ll a,ll b){
    if(b==0) return 1;
    else return a*pw(a,b-1);
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
        ll n;
        cin>>n;
        ll total=((n+1)*n)/2;
        ll sub=0;
        for(ll i=0;;i++){
            ll x=pw(2,i);
            //cout<<"==="<<x<<endl;
            if(x<=n){
                sub+=x;
            }
            else break;
        }
        ll xx=total-sub;
        //cout<<xx<<endl;
        sub=-sub;
        cout<<xx+sub<<endl;
    }
    return 0;
}

