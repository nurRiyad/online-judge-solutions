#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%m==0) v.push_back(a/m);
        else v.push_back((a/m)+1);
    }
    int mx=INT_MIN,c;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        if(mx<=v[i]){
            mx=v[i];
            c=i;
        }
    }
    cout<<endl;
    cout<<c+1<<endl;
    return 0;

}
