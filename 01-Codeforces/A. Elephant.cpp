#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    if(a<5){
        sum++;
    }
    else{
        if(a%5==0){
            sum=a/5;
        }
        else{
            sum=(a/5)+1;
        }
    }
    cout<<sum<<endl;
    return 0;

}
