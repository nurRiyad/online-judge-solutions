#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int> b;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int mx=b[0],mi=b[0],sum=0;
    for(int i=1;i<b.size();i++){
        if(mx<b[i]){
            mx=b[i];
            sum++;
        }
        if(mi>b[i]){
            mi=b[i];
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
