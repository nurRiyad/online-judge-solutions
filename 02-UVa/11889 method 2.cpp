#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
bool prime[mx+5];
vector<long long> arr;

void sieve(){
    for(int i=1;i<=mx;i++) prime[i]=true;
    prime[1]=false;
    for(int i=2;i*i<=mx;i++){
        if(prime[i]){
            for(long long j=i*i;j<=mx;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=1;i<=mx;i++){
        if(prime[i]){
            arr.push_back(i);
        }
    }
}

void findpirmediv(int a,int x[]){
    for(int i=0;(arr[i]*arr[i]<=a)&&(i<arr.size());i++){
        int p=arr[i],cunt=0;
        if(a%p==0){
            while(a%p==0){
                cunt++;
                a=a/p;
            }
            x[p]+=cunt;
        }
    }
    if(a>1){
        x[a]+=1;
    }
}

int main()
{
    sieve();
    int n;
    cin>>n;
    while(n--){
        int a,b;
        int q[mx+5];
        cin>>a>>b;
        if(b%a!=0){
            cout<<"NO SOLUTION"<<endl;
            continue;
        }
        for(int i=0;i<=b;i++) q[i]=0;
        findpirmediv(b,q);
        for(int i=0;(arr[i]*arr[i]<=a)&&(i<arr.size());i++){
        int z=arr[i],cunt=0;
        if(a%z==0){
            while(a%z==0){
                cunt++;
                a=a/z;
            }
            if(cunt==q[z]){
                q[z]=0;
            }
        }
        }
        if(a>1){
            if(1==q[a]){
                q[a]=0;
            }
        }
        long long ans=1;
        for(int i=0;arr[i]<=b;i++){
            int y=arr[i];
            if(q[y]!=0){
                ans=ans*ceil(pow(y,q[y]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
