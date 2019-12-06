#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
bool arr[mx+5];
long long lcm[mx+5];
vector<long long> x;

void seieve(){
    for(long long i=0;i<=(mx);i++) arr[i]=true;
    arr[0]=false;
    arr[1]=false;
    for(long long i=2;i*i<=mx;i++){
        if(arr[i]){
            for(long long j=i*i;j<=mx;j+=i){
                arr[j]=false;
            }
        }
    }
    for(long long i=2;i<=mx;i++){
       if(arr[i])x.push_back(i);
    }
}

void finddiv(long long a,long long n,long long lcm[]){
    long long cunt=0,x=a;
    while(x<=n){
        cunt++;
        x*=a;
    }
    lcm[a]=cunt;
}

int main()
{
    //ofstream myfile;
    //myfile.open("riyad.txt");
    seieve();
    long long n;
    while(cin>>n){
        if(n==0) return 0;
        for(long long i=0;i<=n;i++) lcm[i]=0;
        for(long long i=0;x[i]<=n;i++){
            long long l=x[i];
            finddiv(l,n,lcm);
        }
        /*for(int i=0;x[i]<=n;i++){
            cout<<x[i]<<"--"<<lcm[x[i]]<<endl;
        }
        cout<<endl;*/
        if(lcm[5]<=lcm[2]){
            lcm[2]-=lcm[5];
            lcm[5]=0;
        }
        /*for(int i=0;x[i]<=n;i++){
            cout<<x[i]<<"--"<<lcm[x[i]]<<endl;
        }*/
        long long ans=1;
        for(long long i=0;x[i]<=n;i++){
            long long p=x[i];
            if(lcm[p]!=0){
                long long g=ceil(pow(p,lcm[p]));
                ans=(ans*g)%10;
            }
        }
        cout<<ans<<endl;
        //myfile<<ans%10<<endl;
    }
    return 0;
}
