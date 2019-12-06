#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,w,x,y,z,m;
    cin>>a;
    a++;
    for(int i=a;;i++){
        m=i;
        x=i%10;
        i=i/10;
        y=i%10;
        i=i/10;
        z=i%10;
        i=i/10;
        w=i%10;
        i=m;
        if((w!=x)&&(w!=y)&&(w!=z)&&(x!=y)&&(x!=z)&&(y!=z)){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
