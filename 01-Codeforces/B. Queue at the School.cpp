#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b;
    string a,c;
    cin>>t,b;
    cin>>b>>a;
    while(b--){
        for(int i=0;i<t-1;i++){
            if(a[i]=='B'&&a[i+1]=='G'){
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    cout<<a<<endl;
    return 0;

}
