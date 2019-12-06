#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long a,sum=0;
    for(long long i=1,j=0;;){
        int a=i+j;
        if(a>4000000) break;
        if(a%2==0) sum+=a;
        j=i;
        i=a;
    }
    cout<<sum<<endl;
    return 0;
}
