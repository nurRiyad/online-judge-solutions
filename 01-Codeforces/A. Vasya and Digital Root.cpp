#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,flag=1;
    string a;
    cin>>n>>k;
    char ch=k+'0';
    a.push_back(ch);
    for(int i=1;i<n;i++){
        a.push_back('0');
    }
    if(a.size()>1&&a[0]=='0') cout<<"No solution"<<endl;
    else cout<<a<<endl;
    return 0;
}
