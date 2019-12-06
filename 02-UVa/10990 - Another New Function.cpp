#include<bits/stdc++.h>
using namespace std;
#define mx 2000000
int primes[mx+5];
int phis[mx+5];
int depthphis[mx+5];

void phiseieve(){
    for(int i=1;i<=mx;i++) phis[i]=i;
    primes[1]=1;
    for(int i=2;i<=mx;i++){
        if(primes[i]==0){
            for(int j=i;j<=mx;j+=i){
                primes[j]=1;
                phis[j]=phis[j]/i*(i-1);
            }
        }
    }
}
void depthphi(){
    for(int i=1;i<=mx;i++){
        int cunt=1,dp=phis[i];
        while(dp!=1){
            dp=phis[dp];
            cunt++;
        }
        depthphis[i]=cunt;
    }
}
int main()
{
    phiseieve();
    depthphi();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int p,q,sum=0;
        cin>>p>>q;
        for(int i=p;i<=q;i++){
            sum+=depthphis[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
