#include<bits/stdc++.h>
using namespace std;

long long eulertotient(long long b,long long a){
    return b-(b/a);
}

int main()
{
    while(2){
        long long a,et;
        cin>>a;
        et=a;
        if(a==0) return 0;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0){
                while(a%i==0){
                    a=a/i;
                }
                et=eulertotient(et,i);
            }
        }
        if(a>1){
            et=eulertotient(et,a);
        }
        cout<<et<<endl;
    }
    return 0;
}
