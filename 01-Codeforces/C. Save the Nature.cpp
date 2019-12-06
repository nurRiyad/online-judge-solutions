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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll x,a,y,b,k;
        cin>>x>>a;
        cin>>y>>b;
        cin>>k;
        sort(v.rbegin(),v.rend());
        ll cnt=0;
        bool fg=true;
        for(ll i=1,j=0;i<=n;i++){
            if(i%a==0&&i%b==0){
                cnt+=(v[j]*(x+y))/100;
                j++;
            }
            else if(i%a==0){
                cnt+=(v[j]*x)/100;
                j++;
            }
            else if(i%b==0){
                cnt+=(v[j]*y)/100;
                j++;
            }
            cout<<"coutn=="<<cnt<<" i=="<<i<<" j=="<<j<<endl;
            if(cnt>=k){
                cout<<i<<endl;
                fg=false;
                break;
            }
        }
        if(fg) cout<<-1<<endl;

    }
    return 0;
}
