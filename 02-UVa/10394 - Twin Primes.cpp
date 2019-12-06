#include<bits/stdc++.h>
using namespace std;
#define mx 20000010
int prime[mx];
int tprime[mx];

void primeSieve(){
    prime[1]=1;
    long long n=sqrt(mx);
    for(long long i=2;i<=n;i++){
        if(prime[i]==0){
            for(long long j=i*i;j<=mx;j+=i){
                prime[j]=1;
            }
        }
    }

}

void twinPrime(){
    long long j=1;
    for(long long i=2;i<=mx;i++){
        if((prime[i]==0)&&(prime[i+2]==0)){
            tprime[j]=i;
            j++;
        }
    }
}

int main()
{
    primeSieve();
    twinPrime();
    int n;
    while(cin>>n){
        cout<<"("<<tprime[n]<<", "<<tprime[n]+2<<")"<<endl;
    }
    return 0;
}
