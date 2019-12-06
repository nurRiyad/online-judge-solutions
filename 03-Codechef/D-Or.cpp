#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool Check(ll N,ll pos){
    return (bool)(N & ((ll)1<<pos));
}
ll Set(ll N,ll pos){
    return N=N | ((ll)1<<pos);
}
ll maxor(ll a,ll b){
        ll ans=0;
        bool flag=false;
        for(ll i=63;i>=0;i--){
            if(flag==true){
                ans=Set(ans,i);
            }
            else if(Check(a,i)&&(Check(b,i))){
                ans=Set(ans,i);
            }
            else if(Check(b,i)==true&&(Check(a,i)==false)){
                flag=true;
                ans=Set(ans,i);
            }
        }
        return ans;
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
        ll a,b;
        cin>>a>>b;
        ll ans=maxor(a,b);
        cout<<ans<<endl;
    }
    return 0;
}
