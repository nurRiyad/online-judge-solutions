#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("riyad.txt");
    int n,m;
    while(cin>>n>>m){
        int x=n-m+1;
        long long ans=1;
        for(int i=x;i<=n;i++){
            ans=ans*i;
            while(ans%10==0){
                ans=ans/10;
            }
            ans=ans%1000000000;
        }
        myfile<<ans%10<<endl;
    }
    return 0;
}
