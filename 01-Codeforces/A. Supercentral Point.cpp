#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector< pair<int,int> > vp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int d=0;
        int x=vp[i].first;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(x==vp[j].first){
                if(vp[i].second>vp[j].second){
                    d++;
                    break;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(x==vp[j].first){
                if(vp[i].second<vp[j].second){
                    d++;
                    break;
                }
            }
        }
        int y=vp[i].second;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(y==vp[j].second){
                if(vp[i].first>vp[j].first){
                    d++;
                    break;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(y==vp[j].second){
                if(vp[i].first<vp[j].first){
                    d++;
                    break;
                }
            }
        }
        if(d==4) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
