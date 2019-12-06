#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if((b-a)>=2){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
