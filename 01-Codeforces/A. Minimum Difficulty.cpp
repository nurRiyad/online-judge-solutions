#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n),m,f;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mn=INT_MAX;
    for(int i=1;i<v.size()-1;i++){
        m=v;
        int mx=INT_MIN;
        m.erase(m.begin()+i);
        for(int i=1;i<m.size();i++){
            int d=abs(m[i]-m[i-1]);
            mx=max(mx,d);
        }
        f.push_back(mx);
    }
    sort(f.begin(),f.end());
    cout<<f[0]<<endl;
    return 0;
}
