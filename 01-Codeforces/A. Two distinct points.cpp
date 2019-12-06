#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int l1,r1,l2,r2,a,b;
        cin>>l1>>r1>>l2>>r2;
        a=l1;
        for(int i=l2;i<=r2;i++){
            if(i!=a){
                b=i;
                break;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;

}
