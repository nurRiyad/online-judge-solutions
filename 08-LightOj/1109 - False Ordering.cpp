#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v[2000];
int ar[2000];

bool comp(const pair<ll,ll> &a,const pair<ll,ll> &b){
    if(a.first<b.first){
        return true;
    }
    else if(a.first>b.first){
        return false;
    }
    else{
        if(a.second>b.second) return true;
        else return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    for(ll i=1;i<=1000;i++){
        for(ll j=i;j<=1000;j++){
            if(j%i==0) ar[j]++;
        }
    }
    vector<pair<ll,ll> > vp;
    for(ll i=1;i<=1000;i++){
        vp.push_back(make_pair(ar[i],i));

    }
    sort(vp.begin(),vp.end(),comp);
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n;
        cin>>n;
        cout<<"Case "<<i<<": "<<vp[n-1].second<<endl;
    }
    return 0;
}
