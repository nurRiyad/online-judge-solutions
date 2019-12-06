#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,b;
    cin>>t;
    vector<int> a;
    for(int i=0;i<t;i++){
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
