#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        if(n==0) return 0;
        vector<long long> arr;
        if(n<0){
            n=n*(-1);
        }
        long long max = 0;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                arr.push_back(i);
                max = i;
            }
            while(n%i==0){
                n=n/i;
            }
        }
        if(n>1){
             max = n;
             arr.push_back(n);
        }
        if(arr.size()>1) cout<<max<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}
