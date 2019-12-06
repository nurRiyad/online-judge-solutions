#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    for(int i=0;i<l;i++){
        int e,f,c,sum=0;
        cin>>e>>f>>c;
        int t=e+f;
        while(t>=c){
            sum+=(t/c);
            t=(t/c)+(t%c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
