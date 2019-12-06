#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > vp,vr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vp.push_back(make_pair(a,i));
    }
    for(int j=0;j<m;j++){
        int b;
        cin>>b;
        vr.push_back(make_pair(b,j));
    }
    sort(vp.begin(),vp.end());
    sort(vr.begin(),vr.end());
    for(int i=0;i<vr.size();i++){
        cout<<vp[0].second<<" "<<vr[i].second<<endl;
    }
    cout<<"riyad"<<endl;
    for(int i=1;i<vp.size();i++){
        cout<<vr[vr.size()-1].second<<" "<<vp[i].second<<endl;
    }
    return 0;
}
