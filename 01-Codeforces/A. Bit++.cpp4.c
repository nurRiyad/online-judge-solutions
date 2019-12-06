#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--){
       string a;
       cin>>a;
       for(int i=0;i<a.length();i++)){
           if(a[i]=='+'){
            s++;
            break;
           }
           if(a[i]=='-'){
            s--;
            break;
           }
       }

    }
    cout<<s<<endl;
    return 0;
}
