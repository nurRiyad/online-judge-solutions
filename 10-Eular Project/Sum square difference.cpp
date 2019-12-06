#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long a=((100*101)/2)*((100*101)/2),b=0;
    for(long long i=1;i<=100;i++){
        b+=(i*i);
    }
    cout<<abs(a-b)<<endl;
    return 0;
}
