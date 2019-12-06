#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    double dif=0;
    for(int i=0;i<a.size()-1;i++){
        if(dif<(a[i+1]-a[i])){
            dif=a[i+1]-a[i];
        }
    }
    if(dif<((a[0]-0)*2)){
        dif=(a[0]-0)*2;
    }
    if(dif<((l-a[n-1])*2)){
        dif=(l-a[n-1])*2;
    }
    cout<<setprecision(10)<<fixed<<dif/2<<endl;
    return 0;
}
