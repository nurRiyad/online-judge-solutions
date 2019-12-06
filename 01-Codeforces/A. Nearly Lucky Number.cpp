#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int sum=0;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='4'||a[i]=='7'){
            sum++;
        }
    }
    if(sum==0){
        cout<<"NO"<<endl;
        return 0;
    }
    int x,y=1;
    while(sum>0){
        if(sum%10!=4&&sum%10!=7){
            y=0;
        }
        sum=sum/10;
    }
    if(y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
