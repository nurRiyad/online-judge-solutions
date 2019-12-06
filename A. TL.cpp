#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> v(m),p(n);
    for(int i=0;i<m;i++) cin>>v[i];
    for(int i=0;i<n;i++) cin>>p[i];
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    for(int i=v[v.size()-1];i<p[0];i++){
        int x=v[0];
        if((x*2)<=i){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
