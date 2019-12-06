#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int primes[mx+5];
int mn[mx+5];

void seieve(){
    primes[0]=1;
    primes[1]=1;
    for(int i=2;i<=sqrt(mx);i++){
        if(primes[i]==0){
            for(int j=i*i;j<=mx;j+=i){
                primes[j]=1;
            }
        }
    }
}
void mofn(){
    mn[1]=1;
    for(int i=2;i<=mx;i++){
        int x=i;
        if(primes[x]==0) mn[x]=-1;
        else{
            int flag=1,cuntfac=0;
            for(int j=2;j<=sqrt(x);j++){
                if(x%j==0){
                    cuntfac++;
                    int cnt=0;
                    while(x%j==0){
                        x=x/j;
                        cnt++;
                    }
                    if(cnt>1){
                        mn[i]=0;
                        flag=0;
                        break;
                    }
                }
            }
            if(x>1) cuntfac++;
            if(flag){
                if(cuntfac%2==0) mn[i]=1;
                else mn[i]=-1;
            }
        }
    }
}

int main()
{
    seieve();
    mofn();
    int a;
    while(cin>>a){
        if(a==0) return 0;
        int sum=0;
        for(int i=1;i<=a;i++){
            sum+=mn[i];
        }
        cout<<setw(8)<<a<<setw(8)<<mn[a]<<setw(8)<<sum<<endl;
    }
    return 0;
}

