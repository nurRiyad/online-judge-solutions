#include<bits/stdc++.h>
using namespace std;
#define mx 100000
bool prime[mx+5];
vector<int> arr;


void sieve(){
    for(int i=0;i<=mx;i++){
        prime[i]=true;
    }
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=mx;i++){
        if(prime[i]){
            for(int j=i*i;j<=mx;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<mx;i++){
        if(prime[i]){
            arr.push_back(i);
        }
    }
}

void segmentsieve(long long l,long long u,vector<long long> &ans){
    bool segsiv[u-l+5];
    for(int i=0;i<(u-l+5);i++) segsiv[i]=true;
    for(long long i=0;arr[i]*(long long)arr[i]<=u;i++){
        long long currentprime=arr[i];
        long long base=(l/currentprime)*currentprime;
        if(base<l) base+=currentprime;
        for(long long j=base;j<=u;j+=currentprime){
            segsiv[j-l]=false;
        }
        if(base==currentprime){
            segsiv[base-l]=true;
        }
    }
    if(l==1) segsiv[0]=false;
    for(long long i=0;i<(u-l+1);i++){
        if(segsiv[i]){
            ans.push_back(i+l);
        }
    }
}

int main()
{
    sieve();
    long long a,b;
    while(cin>>a>>b){
        vector<long long> ans;
        segmentsieve(a,b,ans);
        if(ans.size()<2){
            cout<<"There are no adjacent primes."<<endl;
            continue;
        }
        else{
            long long m=ans[1],n=ans[0],p=ans[1],q=ans[0];
            long long max=m-n,min=p-q;
            for(long long i=0;i<ans.size()-1;i++){
                long long dif=ans[i+1]-ans[i];
                if(dif>max){
                    m=ans[i+1];
                    n=ans[i];
                    max=dif;
                }
                if(dif<min){
                    p=ans[i+1];
                    q=ans[i];
                    min=dif;
                }
            }
            cout<<q<<","<<p<<" are closest, "<<n<<","<<m<<" are most distant."<<endl;
        }
    }
    return 0;
}
