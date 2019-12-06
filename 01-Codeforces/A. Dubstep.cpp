#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    int j=1,k=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
            i+=2;
            if(j==0) b.push_back(' ');
            j=1;
        }
        else{
            b.push_back(a[i]);
            j=0;
        }
    }
    cout<<b<<endl;
    return 0;
}
