#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,sum=0;
    vector<int> sv;
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        vector<int> v(a);
        for(int j=0;j<a;j++){
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        if(v[0]<s){
            sum++;
            sv.push_back(i);
        }
    }
    sort(sv.begin(),sv.end());
    cout<<sum<<endl;
    for(int i=0;i<sv.size();i++){
        if(i!=sv.size()-1) cout<<sv[i]<<" ";
        else cout<<sv[i]<<endl;
    }
    return 0;
}
