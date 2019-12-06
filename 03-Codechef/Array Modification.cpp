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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll ar[n+10];
        memset(ar,0,sizeof(ar));
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<v.size();i++){
            ar[i]+=k/n;
            if(k%n>i) ar[i]+=1;
        }
        //for(ll i=0;i<n;i++) cout<<ar[i]<<" ";
        //cout<<endl;

        vector<ll> ans;
        for(ll i=0;i<v.size();i++){
            if(i==v.size()/2&&v.size()%2==1){
                ll x=ar[i];
                if(x>0) ans.push_back(0);
                else ans.push_back(v[i]);
                //cout<<i<<"-here middle"<<endl;
            }
            else if(i<v.size()/2){
                ll x=ar[i];
                ll a=v[i];
                ll c=v[n-i-1];
                ll b=a^c;
                //cout<<i<<"-here first half"<<endl;
                if(x%3==0) ans.push_back(a);
                else if(x%3==1) ans.push_back(b);
                else if(x%3==2) ans.push_back(c);
            }
            else{
                ll x=ar[i];
                ll a=v[i];
                ll b=v[n-i-1];
                ll c=a^b;
                //cout<<i<<"-here last half"<<endl;
                if(x%3==0) ans.push_back(a);
                else if(x%3==1) ans.push_back(b);
                else if(x%3==2) ans.push_back(c);
            }
        }
        for(ll i=0;i<ans.size()-1;i++) cout<<ans[i]<<" ";
        cout<<ans[ans.size()-1]<<endl;
    }
    return 0;
}
