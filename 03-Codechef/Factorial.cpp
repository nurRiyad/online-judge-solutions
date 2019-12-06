#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long t;
    cin>>t;
    while(t--){
        long long n,sum2=0,sum5=0,a=2,b=5;
        cin>>n;
        while(n/a>0){
            sum2+=(n/a);
            a=a*2;
        }
        while(n/b>0){
            sum5+=(n/b);
            b=b*5;
        }
        cout<<min(sum2,sum5)<<endl;
    }
    return 0;
}
