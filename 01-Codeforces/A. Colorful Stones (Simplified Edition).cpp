#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int i,j;
    cin>>a>>b;
    for(i=0,j=0;i<b.size();i++){
        if(b[i]==a[j]){
            j++;
        }
    }
    cout<<++j<<endl;
    return 0;
}
