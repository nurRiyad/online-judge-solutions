#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long  n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        return 0;
    }
    else{
        int flag=1;
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0){
                n=(n-i);
                flag=0;
                break;
            }
        }
        if(flag) n=n-n;
        cout<<(n/2)+1<<endl;
    }
    return 0;
}
