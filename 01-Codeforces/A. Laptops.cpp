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
    sort(vp.begin(),vp.end());
    for(int i=0;i<vp.size()-1;i++){
        if(vp[i].second>vp[i+1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}
