#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    vector<int> v,u;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    x=v[v.size()-1];
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]){
            u.push_back(v[i]);
            i++;
        }
        else if(x%v[i]!=0){
            u.push_back(v[i]);
        }
    }
    y=u[u.size()-1];
    cout<<x<<" "<<y<<endl;
    return 0;
}
