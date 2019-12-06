#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="1"||a=="4"||a=="78") cout<<"+"<<endl;
        else if(a[a.size()-2]=='3'&&a[a.size()-1]=='5') cout<<"-"<<endl;
        else if(a[0]=='9'&&a[a.size()-1]=='4') cout<<"*"<<endl;
        else cout<<"?"<<endl;
    }
    return 0;
}
