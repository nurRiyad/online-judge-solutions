#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<double,double> > vp;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            vp.push_back(make_pair(a,b));
        }
        double mindis=INT_MAX;
        int flag=0;
        for(int i=0;i<vp.size();i++){
            for(int j=i+1;j<vp.size();j++){
                double midx=(vp[i].first+vp[j].first)/2;
                double midy=(vp[i].second+vp[j].second)/2;
                double c1=midy-midx;
                double c2=midy+midx;
                //for the slope 1
                double d1=abs(-vp[i].first+vp[i].second-c1);
                double d2=abs(-vp[j].first+vp[j].second-c1);
                double x1=max(d1,d2);
                //for the slope -1
                d1 =abs(vp[i].first+vp[i].second-c2);
                d2 =abs(vp[j].first+vp[j].second-c2);
                double x2=max(d1,d2);

                //cout<<x1<<" "<<x2<<endl;
                double x=min(x1,x2);
                mindis=min(x,mindis);
                if(mindis==0){
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        printf("%.7lf\n",mindis);
    }
    return 0;
}
