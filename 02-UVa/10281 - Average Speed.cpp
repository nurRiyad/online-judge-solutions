#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    double cdis,dis=0,curr,prev=0,kmh,d;
    char x;
    while(scanf("%d:%d:%d%c",&a,&b,&c,&x)!=EOF){
        if(x==' '){
            if(prev==0){
                cin>>d;
                kmh=d/3600.0;
                prev=(a*3600)+(b*60)+c;
            }
            else{
                cin>>d;
                curr=(a*3600)+(b*60)+c;
                cdis=curr-prev;
                dis+=(cdis*kmh);
                prev=curr;
                kmh=d/3600.0;
            }

        }
        else{
            curr=(a*3600)+(b*60)+c;
            cdis=curr-prev;
            dis+=(cdis*kmh);
            prev=curr;
            cout<<setprecision(2)<<fixed<<setfill('0')<<setw(2)<<a<<":"<<setw(2)<<b<<":"<<setw(2)<<c<<" ";
            cout<<dis<<" km"<<endl;
        }
    }
    return 0;
}

