#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0,a,c;
    for(int c=1;;c++){
        int a=c;
        while(a%2==0){
            a/=2;
        }
        while(a%3==0){
            a/=3;
        }
        while(a%5==0){
            a/=5;
        }
        if(a==1){
            b++;
        }
        if(b==1500){
            cout<<"The 1500'th ugly number is "<<c<<"."<<endl;
            return 0;
        }
    }
    return 0;
}
