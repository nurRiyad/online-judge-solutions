#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mn=INT_MAX;
    cin>>n;
    vector<long long > v(n);
    vector< pair<long long ,long long> > vp;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        if(mn>v[i]) mn=v[i];
    }
    for(long long i=0;i<v.size()-1;i++){
        long long a,b;
        if(mn>=0){
            a=v[i];
            b=v[i+1];
        }
        else{
            a=v[i]+abs(mn);
            b=v[i+1]+abs(mn);
        }
        vp.push_back(make_pair(min(a,b),max(a,b)));
    }
    //for(int i=0;i<vp.size();i++) cout<<vp[i].first<<" "<<vp[i].second<<endl;
    for(long long i=0;i<vp.size();i++){
        for(long long j=0;j<vp.size();j++){
            if(i==j) continue;
            else{
                if(vp[i].first<=vp[j].first&&vp[i].second>=vp[j].second) continue;
                else if(vp[i].first>=vp[j].first&&vp[i].second<=vp[j].second) continue;
                else if(vp[i].first<=vp[j].first&&vp[i].second<=vp[j].first) continue;
                else if(vp[i].first>=vp[j].second&&vp[i].second>=vp[j].second) continue;
                else{
                    //cout<<"j======="<<vp[j].first<<" "<<vp[j].second<<endl;
                    //cout<<"i======="<<vp[i].first<<" "<<vp[i].second<<endl;
                    cout<<"yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"no"<<endl;
    return 0;

}
