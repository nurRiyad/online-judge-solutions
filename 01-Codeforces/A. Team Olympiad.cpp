#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector< pair < int, int > > m,p,s;
    for(int i=1;i<=t;i++){
        int x;
        cin>>x;
        if(x==1) p.push_back(make_pair(x,i));
        else if(x==2) m.push_back(make_pair(x,i));
        else s.push_back(make_pair(x,i));
    }
    int x=min(min(p.size(),m.size()),s.size());
    cout<<x<<endl;
    for(int i=0;i<x;i++){
        cout<<p[i].second<<" "<<m[i].second<<" "<<s[i].second<<endl;
    }
    return 0;
}
