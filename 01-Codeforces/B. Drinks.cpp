#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    double sum=0,b;
    for(int i=0;i<a;i++){
        cin>>b;
        sum+=b/100;
    }
    cout<<setprecision(12)<<fixed<<(sum/a)*100<<endl;
    return 0;
}
