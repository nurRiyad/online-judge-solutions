#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int sum=m*n;
    int d=0;
    while(sum>0){
        d++;
        sum-=(m+n)-1;
        m--;
        n--;
    }
    if(d%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
    return 0;
}
