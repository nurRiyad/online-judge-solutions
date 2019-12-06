#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> a,b;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    int sum=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
