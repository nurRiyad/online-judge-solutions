#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    for(int j=0;j<t;j++){
        long long s,n;
        cin>>s;
        n=(-1+sqrt(1+(8*s)))/2;
        cout<<n<<endl;
    }
    return 0;
}
