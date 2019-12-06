#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=x) a=a-x;
    else {
        cout<<"NO"<<endl;
        return 0;
    }
    if((a+b)>=y){
        if(a>=y) a=a-y;
        else{
            y=y-a;
            b=b-y;
            a=0;
        }
    }

    else{
        cout<<"NO"<<endl;
        return 0;
    }
    if((a+b+c)>=z){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
