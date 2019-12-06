#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,odd=0,even=0,of,ef;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
        if(b[i]%2==0){
            even++;
            ef=i+1;
        }
        else{
            odd++;
            of=i+1;
        }
    }
    if(odd>even){
        cout<<ef<<endl;
    }
    else{
        cout<<of<<endl;
    }
    return 0;
}
