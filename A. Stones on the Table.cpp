#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    string a;
    cin>>a;
    for(int i=0;i<a.length()-1;i++){
        if(a[i]=='R'&&a[i+1]=='R'){
          s++;
        }
        else if(a[i]=='G'&&a[i+1]=='G'){
            s++;
        }
        else if(a[i]=='B'&&a[i+1]=='B'){
            s++;
        }
    }
    cout<<s<<endl;
}
