#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,e,o,sum;
    cin>>a;
    e=a/2;
    if(a%2==0){
        o=a/2;
    }
    else{
        o=(a/2)+1;
    }
    sum=(e*(e+1))-(o*o);
    cout<<sum<<endl;
    return 0;
}
