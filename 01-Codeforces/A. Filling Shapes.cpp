#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n;
    cin>>n;
    if(n<2) cout<<0<<endl;
    else if(n%2==0){
        n=n/2;
        long long ans=2,x=2;
        for(long long i=1;i<n;i++){
            ans=ans*x;
        }
        cout<<ans<<endl;
    }
    else cout<<0<<endl;
    return 0;
}
