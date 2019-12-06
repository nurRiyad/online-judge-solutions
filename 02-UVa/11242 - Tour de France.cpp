#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(true){
        ll f,r;
        cin>>f;
        if(f==0) return 0;
        cin>>r;

        vector<ll> ff(f),rr(r);

        for(ll i=0;i<f;i++) cin>>ff[i];
        for(ll i=0;i<r;i++) cin>>rr[i];

        vector<double> d;

        for(ll i=0;i<ff.size();i++){
            for(ll j=0;j<rr.size();j++){
                double x=(double) rr[j]/(double) ff[i];
                d.push_back(x);
            }
        }
        sort(d.begin(),d.end());
        double ans=(double)INT_MIN;
        for(ll i=0;i<d.size()-1;i++){
            double x=(double)d[i+1]/(double)d[i];
            ans=max(ans,x);
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
