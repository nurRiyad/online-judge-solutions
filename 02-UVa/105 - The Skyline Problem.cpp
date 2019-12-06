#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    ll ar[100000],l,r,h;
    memset(ar,0,sizeof(ar));
    ll mx=-1000,mn=INT_MAX;
    while(cin>>l>>h>>r){
        mn=min(mn,l);
        mx=max(mx,r);

        for(ll i=l;i<r;i++){
            if(ar[i]<h) ar[i]=h;
        }
    }
    //for(ll i=0;i<=30;i++) cout<<ar[i]<<"  ";
    //cout<<endl;
    cout<<mn<<" "<<ar[mn]<<" ";
    ll d=ar[mn];
    vector<ll> ans;
    ans.push_back(1);
    ans.push_back(ar[1]);
    for(ll i=2;i<=mx;i++){
        if(d!=ar[i]){
            ans.push_back(i);
            ans.push_back(ar[i]);
            d=ar[i];
        }
    }
    for(ll i=0;i<ans.size()-1;i++) cout<<ans[i]<<" ";
    cout<<ans[ans.size()-1]<<endl;
    return 0;
}
