#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,p;
    cin>>a;
    int b[a];
    for(int i=1;i<=a;i++){
        cin>>p;
        b[p]=i;
    }
    for(int i=1;i<=a;i++){
        cout<<b[i];
        if(i!=a){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
