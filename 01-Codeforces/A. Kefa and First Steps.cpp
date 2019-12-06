#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,s=0,cnt=0,mx=0;
    cin>>t;
    while(t--){
        cin>>a;
        if(a>=s){
            s=a;
            cnt++;
            if(cnt>=mx){
                mx=cnt;
            }
        }
        else{
            cnt=1;
            s=a;
        }
    }
    cout<<mx<<endl;
    return 0;
}
