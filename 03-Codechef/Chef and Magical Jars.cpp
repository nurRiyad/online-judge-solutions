#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            x--;
            sum+=x;
        }
        sum++;
        cout<<sum<<endl;
    }
    return 0;

}
