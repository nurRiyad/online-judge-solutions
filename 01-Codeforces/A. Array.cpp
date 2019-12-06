#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    vector<int> p,n;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(a<0) n.push_back(a);
        if(a>0) p.push_back(a);
    }
    cout<<1<<" "<<n[0]<<endl;
    n.erase(n.begin()+0);
    if(n.size()%2==0){
        int x=n.size()+p.size();
        for(int i=0;i<n.size();i++) p.push_back(n[i]);
        cout<<x<<" ";
        for(int i=0;i<p.size();i++){
            if(i!=p.size()-1) cout<<p[i]<<" ";
            else cout<<p[i]<<endl;
        }
        cout<<1<<" "<<0<<endl;
    }
    else{
        int x=(n.size()-1)+p.size();
        for(int i=1;i<n.size();i++) p.push_back(n[i]);
        cout<<x<<" ";
        for(int i=0;i<p.size();i++){
            if(i!=p.size()-1) cout<<p[i]<<" ";
            else cout<<p[i]<<endl;
        }
        cout<<2<<" "<<0<<" "<<n[0]<<endl;
    }
    return 0;
}
