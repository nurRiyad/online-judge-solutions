#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,u;
    while(cin>>l>>u){
        long long mx=0,fg;
        if(l==0&&u==0) return 0;
        if(l>u) swap(u,l);
        for(int i=l;i<=u;i++){
            long long cnt=0,n=i;
            while(n){
                if(n%2==1) n=(3*n)+1;
                else if(n%2==0) n=n/2;
                cnt++;
                if(n==1) break;
            }
            if(mx<cnt){
                mx=cnt;
                fg=i;

            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<fg<<" generates the longest sequence of "<<mx<<" values."<<endl;
    }
    return 0;
}
