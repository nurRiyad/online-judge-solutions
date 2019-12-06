#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int dif1=abs(a-b)+abs(a-c);
    int dif2=abs(a-b)+abs(b-c);
    int dif3=abs(a-c)+abs(b-c);
    int mi=dif1;
    if(dif2<mi) mi=dif2;
    if(dif3<mi) mi=dif3;
    cout<<mi<<endl;
    return 0;
}
