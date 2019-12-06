#include<bits/stdc++.h>
using  namespace std;
long long int fact(int a)
{
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}

int main()
{
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        cout<<fact(a)<<endl;
    }
    return 0;
}
