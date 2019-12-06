#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,mx=INT_MIN;
    cin>>n>>a;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i>0){
            int d=v[i-1]-v[i];
            mx=max(mx,d);
        }
    }
    mx=mx-a;
    if(mx<0) cout<<0<<endl;
    else cout<<mx<<endl;
    return 0;
}
