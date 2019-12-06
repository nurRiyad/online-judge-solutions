#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans=0,x;
    cin>>n;
    for(long long i=n+1,sum=1;;i++,sum++){
        int m=abs(i),flag=0;
        while(m!=0){
            int x=m%10;
            if(x==8){
                flag=1;
                break;
            }
            else{
                m=m/10;
            }
        }
        if(flag){
            ans+=sum;
            break;
        }
    }
    cout<<ans<<endl;
}
