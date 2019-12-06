#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a;
    int x=0,y=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='A') x++;
        else y++;
    }
    if(x>y) cout<<"Anton"<<endl;
    else if(y>x) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}
