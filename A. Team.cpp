#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            s++;
        }

    }
    cout<<s<<endl;
    return 0;
}
