#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int sum1=0,sum2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='0'&&sum1==0){
            cout<<1<<" "<<1<<endl;
            sum1++;
        }
        else if(a[i]=='0'&&sum1==1){
            cout<<1<<" "<<2<<endl;
            sum1++;
        }
        else if(a[i]=='0'&&sum1==2){
            cout<<1<<" "<<3<<endl;
            sum1++;
        }
        else if(a[i]=='0'&&sum1==3){
            cout<<1<<" "<<3<<endl;
            sum1=0;
        }
        else if(a[i]=='1'&&sum2==0){
            cout<<4<<" "<<1<<endl;
            sum2++;
        }
        else if(a[i]=='1'&&sum2==1){
            cout<<4<<" "<<3<<endl;
            sum2=0;
        }
    }
    return 0;
}
