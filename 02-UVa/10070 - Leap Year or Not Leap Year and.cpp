#include<bits/stdc++.h>
using namespace std;
bool isleapyear(int a){
    if(a%400==0) return true;
    else if(a%100) return false;
    else if(a%4==0) return true;
    else return false;
}
int main()
{
    int a;
    while(1){
        int fg=1;
        cin>>a;
        if(isleapyear(a)){ cout<<"This is leap year."<<endl;fg=0;}
        if(a%15==0) {cout<<"This is huluculu festival year."<<endl;fg=0;}
        if(isleapyear(a)&&a%55==0) {cout<<"This is bulukulu festival year."<<endl;fg=0;}
        if(fg) cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
