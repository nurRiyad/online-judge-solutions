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
        ll a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        vector<pair<int,int> > vp;
        vp.push_back(make_pair(a,x));
        vp.push_back(make_pair(b,y));
        vp.push_back(make_pair(c,z));

        bool flag=true;
        sort(vp.begin(),vp.end());
        for(ll i=0;i<vp.size()-1;i++){
            if(vp[i].first==vp[i+1].first){
                if(vp[i].second!=vp[i+1].second){
                    cout<<"NOT FAIR"<<endl;
                    flag=false;
                    break;
                }
            }
            else if(vp[i].first>vp[i+1].first){
                if(vp[i].second<=vp[i+1].second){
                    cout<<"NOT FAIR"<<endl;
                    flag=false;
                    break;
                }
            }
            else{
                if(vp[i].second>=vp[i+1].second){
                    cout<<"NOT FAIR"<<endl;
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"FAIR"<<endl;
    }
    return 0;
}
