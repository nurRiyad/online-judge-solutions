#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=INT_MIN,mn=INT_MAX;
    vector<int> ar;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
        mx=max(mx,x);
        mn=min(mn,x);
    }
    int minCost=INT_MAX,t;
    for(int i=mn;i<=mx;i++){
        int cost=0;
        for(int j=0;j<ar.size();j++){
            if(i<(ar[j]-1)){
                cost+=abs((ar[j]-1)-i);
            }
            if(i>(ar[j]+1)){
                cost+=abs(i-(ar[j]+1));
            }
        }
        if(cost<minCost){
            minCost=cost;
            t=i;
        }
    }
    cout<<t<<" "<<minCost<<endl;
    return 0;
}
