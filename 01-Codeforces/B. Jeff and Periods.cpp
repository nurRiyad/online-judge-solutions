#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 100009
vector<ll> v[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    set<ll> st;
    for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        st.insert(a);
        v[a].push_back(i);
    }
    vector<pair<int,int> > vp;
    ll cnt=0;
    for(auto it:st){
        ll x=(ll)it;
        if(v[x].size()==1){
            vp.push_back(make_pair(x,0));
            cnt++;
        }
        else{
            ll d=v[x][1]-v[x][0];
            bool flag=true;
            for(ll i=1;i<v[x].size();i++){
                ll dd=v[x][i]-v[x][i-1];
                if(d!=dd){
                    flag=false;
                    break;
                }
            }
            if(flag){
                vp.push_back(make_pair(x,d));
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    for(ll i=0;i<vp.size();i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    return 0;
}
