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
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        bool fg=false;
        vector<ll> d,ind;
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                ll x=(b[i]-a[i]);
                if(x<=0){
                    fg=true;
                    break;
                }
                d.push_back(x);
                ind.push_back(i+1);
            }
        }
        if(fg){
            cout<<"NO"<<endl;
            continue;
        }
        if(d.size()==0){
            cout<<"YES"<<endl;
            continue;
        }
        bool flag=false;
        for(ll i=0;i<d.size()-1;i++){
            if(d[i]!=d[i+1]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        //cout<<"here"<<endl;
        sort(ind.begin(),ind.end());
        bool flag1=false;
        //for(ll i=0;i<ind.size();i++) cout<<ind[i]<<" ";
        //cout<<endl;
        for(ll i=0;i<ind.size()-1;i++){
            if(ind[i]+1!=ind[i+1]){
                flag1=true;
                break;
            }
        }
        if(flag1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}

