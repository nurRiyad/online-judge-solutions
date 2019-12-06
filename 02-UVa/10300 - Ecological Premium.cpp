#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int f,a,b,c,sum=0;
        cin>>f;
        for(int j=0;j<f;j++){
            cin>>a>>b>>c;
            sum+=a*c;
        }
        cout<<sum<<endl;
    }
    return 0;
}
