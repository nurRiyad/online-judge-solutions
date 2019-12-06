#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(2){
        int a,cnt=0,b;
        cin>>a;
        if(a==0) return 0;
        b=a;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0){
                cnt++;
                while(a%i==0){
                    a=a/i;
                }
            }
        }
        if(a>1) cnt++;
        cout<<b<<" : "<<cnt<<endl;
    }
    return 0;
}
