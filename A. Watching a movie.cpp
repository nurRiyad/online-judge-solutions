#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,sum=0;
    cin>>n>>x;
    vector< pair<int,int> > vp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int d=(b-a)+1;
        sum+=d;
        vp.push_back(make_pair(a,b));
    }
    sort(vp.begin(),vp.end());
    int d=((vp[0].first-1)-1)+1;
    sum+=(d%x);
    for(int i=0;i<vp.size()-1;i++){
        int z=vp[i].second+1;
        int y=vp[i+1].first-1;
        int f=(y-z)+1;
        sum+=(f%x);
    }
    cout<<sum<<endl;
    return 0;
}
