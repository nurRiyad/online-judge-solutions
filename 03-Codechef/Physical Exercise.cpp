#include<bits/stdc++.h>
#define ll long long
using namespace std;

double distance(double x,double y,double a, double b){
    return sqrt(pow(abs(x-a),2)+pow(abs(y-b),2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        ll n,m,k;
        cin>>n>>m>>k;
        double ar[n+10],br[m+10],cr[k+10],nr[n+10],mr[m+10];
        vector<pair<double,double> > va;
        vector<pair<double,double> > vb;
        vector<pair<double,double> > vc;
        for(ll i=0;i<n;i++){
            double a,b;
            cin>>a>>b;
            ar[i]=distance(x,y,a,b);
            cout<<ar[i]<<" ";
            va.push_back(make_pair(a,b));
        }cout<<endl;
        for(ll i=0;i<m;i++){
            double a,b;
            cin>>a>>b;
            br[i]=distance(x,y,a,b);
            cout<<br[i]<<" ";
            vb.push_back(make_pair(a,b));
        }cout<<endl;
        for(ll i=0;i<k;i++){
            double a,b;
            cin>>a>>b;
            vc.push_back(make_pair(a,b));
        }
        //shortest distance c to a
        for(ll i=0;i<n;i++){
            double mn=INT_MAX;
            for(ll j=0;j<k;j++){
                double d=distance(va[i].first,va[i].second,vc[j].first,vc[j].second);
                cout<<d<<endl;
                mn=min(mn,d);
            }
            nr[i]=mn;
            cout<<nr[i]<<" ";
        }cout<<endl;
        //shortest distance c b
        for(ll i=0;i<m;i++){
            double mn=INT_MAX;
            for(ll j=0;j<k;j++){
                double d=distance(vb[i].first,vb[i].second,vc[j].first,vc[j].second);
                cout<<d<<endl;
                mn=min(mn,d);
            }
            mr[i]=mn;
            cout<<mr[i]<<" ";
        }cout<<endl;
        double ans=INT_MAX;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                double d=distance(va[i].first,va[i].second,vb[j].first,vb[j].second);
                d=d+ar[i]+mr[j];
                ans=min(ans,d);
            }
        }
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                double d=distance(vb[i].first,vb[i].second,va[j].first,va[j].second);
                d=d+br[i]+nr[j];
                ans=min(ans,d);
            }
        }
        cout<<"ans="<<ans<<endl;

    }
    return 0;
}
