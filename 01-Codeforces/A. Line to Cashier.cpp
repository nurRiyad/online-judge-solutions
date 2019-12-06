#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n),r;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int x=v[i],sum=0;
        for(int j=0;j<x;j++){
            int a;
            cin>>a;
            sum+=(a*5);
        }
        sum+=(x*15);
        r.push_back(sum);
    }
    sort(r.begin(),r.end());
    cout<<r[0]<<endl;
    return 0;

}
