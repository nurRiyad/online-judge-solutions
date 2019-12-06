#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,mx=INT_MIN;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b>k){
            int d=a-(b-k);
            mx=max(d,mx);
        }
        else{
            int d=a;
            mx=max(d,mx);
        }
    }
    cout<<mx<<endl;
    return 0;
}
