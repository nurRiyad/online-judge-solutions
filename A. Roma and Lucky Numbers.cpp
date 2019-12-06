#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    vector<string> v;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        int d=0;
        string a=v[i];
        for(int j=0;j<a.size();j++){
            if(a[j]=='4'||a[j]=='7') d++;
        }
        if(d<=k) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
