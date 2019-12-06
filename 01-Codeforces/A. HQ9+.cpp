#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int b=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
            b++;
    }
    if(b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
