#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n=0,m=0;
    cin>>t;
    vector<int> v(t),f(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
        f[i]=v[i];
    }
    sort(f.begin(),f.end());
    for(int i=0;i<t-1;i++){
        if(v[i]!=f[i]){
            n=i;
            break;
        }
    }
    for(int i=t-1;i>=0;i--){
        if(f[i]!=v[i]){
            m=i;
            break;
        }
    }
    reverse(v.begin()+n,v.begin()+m+1);
    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    for(int i=n;i<m;i++){
        if(v[i]>v[i+1]){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<n+1<<" "<<m+1<<endl;
    return 0;
}
