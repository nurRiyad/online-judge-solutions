#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,b;
    cin>>s>>b;
    vector<pair<int,int>> a;
    for(int i=0;i<b;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(s>a[i].first){
            s+=a[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
