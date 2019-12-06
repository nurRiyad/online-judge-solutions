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
        ll n,x;
        bool flag=false;
        cin>>n>>x;
        ll mxd=INT_MIN,bare,come;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            if(a>=x) flag=true;
            ll dif=a-b;
            if(dif>mxd){
                come=a;
                bare=b;
                mxd=max(mxd,dif);
            }
        }
        //cout<<"mxd=="<<mxd<<endl;
        if(flag) cout<<1<<endl;
        else if(mxd<=0) cout<<-1<<endl;
        else{
            ll cnt=0;
            while(x>0){
                x-=come;
                cnt++;
                if(x<=0) break;
                x+=bare;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
