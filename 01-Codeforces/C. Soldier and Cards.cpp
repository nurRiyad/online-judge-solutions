#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mk  make_pair
#define pb  push_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);


    ll n;
    cin>>n;
    ll a;
    cin>>a;
    vector<ll> v(a);
    for(ll i=0;i<a;i++) cin>>v[i];
    ll b;
    cin>>b;
    vector<ll> r(b);
    for(ll i=0;i<b;i++) cin>>r[i];
    queue<ll> x,y;
    for(ll i=0;i<a;i++) x.push(v[i]);
    for(ll i=0;i<b;i++) y.push(r[i]);
    ll cnt=0;
    while(!x.empty()&&!y.empty()){
        ll n=x.front();
        ll m=y.front();
        //cout<<n<<" "<<m<<endl;
        x.pop();
        y.pop();
        if(n>m){
            x.push(m);
            x.push(n);
        }
        else{
            y.push(n);
            y.push(m);
        }
        cnt++;
        if(cnt==20000) break;
    }
    if(cnt==20000) cout<<-1<<endl;
    else{
        if(x.size()==0) cout<<cnt<<" "<<2<<endl;
        else cout<<cnt<<" "<<1<<endl;
    }
    return 0;
}
