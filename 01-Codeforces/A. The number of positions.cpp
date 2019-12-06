#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c;
    d=a-b-1;
    if(d>=c){
        cout<<c+1<<endl;
    }
    else{
        cout<<d+1<<endl;
    }
    return 0;

}
