#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<26;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //cout<<v.size()<<endl;
    int sum=0;
    for(int i=0,j=1;i<a.size();i++,j++){
        sum+=(v[a[i]-97]*j);
    }
    //cout<<sum<<endl;
    sort(v.begin(),v.end(),greater<int>());
    int x=v[0];
    for(int j=0,i=(a.size()+1);j<n;j++,i++){
        sum+=(x*i);
    }
    cout<<sum<<endl;
    return 0;
}
