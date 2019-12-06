#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,k,m,x,flag=0;
    cin>>y>>k>>m;
    vector<int> v;
    int mx=max(y,k);
    for(int i=k;i<=m;i+=k){
        if((i%k==0)&&(i>=mx)){
            x=i;
            break;
        }
    }
    for(int i=x;i<=m;i+=k){
        if((i-y)>0) v.push_back(i-y);
    }
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1) cout<<v[i]<<" ";
        else cout<<v[i]<<endl;
    }
    if(v.size()==0) cout<<-1<<endl;
    return 0;
}
