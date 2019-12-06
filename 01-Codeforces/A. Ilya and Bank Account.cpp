#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>=0) cout<<a;
    else{
        int x=abs(a%10);
        int y=abs((a/10)%10);
        //cout<<x<<endl<<y<<endl;
        if(x>y) cout<<a/10<<endl;
        else{
            int z=a/10;
            z=z+(y-x);
            cout<<z<<endl;
        }

    }
    return 0;
}
