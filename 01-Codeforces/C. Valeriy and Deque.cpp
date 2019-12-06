#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,q,mx=-1,mxpos=-1;
    cin>>n>>q;
    deque<ll> dq;
    vector<pair<ll,ll> > vp;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a>mx){
            mx=a;
            mxpos=i;
        }
        dq.push_back(a);
    }
    for(ll i=0;i<mxpos;i++){
        ll a=dq.front();
        dq.pop_front();
        ll b=dq.front();
        dq.pop_front();
        vp.push_back(make_pair(a,b));
        dq.push_front(max(a,b));
        dq.push_back(min(a,b));
    }
    while(q--){
        long long a;
        cin>>a;
        if(a<=vp.size()){
            cout<<vp[a-1].first<<" "<<vp[a-1].second<<endl;
        }
        else{
            ll m=a-vp.size();
            m=m%(n-1);
            if(m==0){
                m=n-1;
            }
            cout<<dq[0]<<" "<<dq[m]<<endl;
        }
    }
    return 0;
}
