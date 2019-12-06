#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x,y;
    sort(v.begin(),v.end());
    if(v.size()>m){
        x=m;
        m=0;
    }
    else{
        x=v.size()-1;
        m=m-(v.size()-1);
    }
    double d=0;
    for(int i=x;i<v.size();i++){
        d+=v[i];
    }
    y=v.size()-(x);
    if((y*k)<=m) d+=(y*k);
    else d+=m;
    printf("%.8lf\n",(d/y));
    return 0;

}
