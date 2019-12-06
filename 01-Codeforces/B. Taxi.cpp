#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,w=0,x=0,y=0,z=0,s=0;
    cin>>t;
    while(t--){
        cin>>a;
        if(a==1) w++;
        else if(a==2) x++;
        else if(a==3) y++;
        else if(a==4) z++;
    }
    s+=z;
    if(y>=w){
        s+=w;
        y=y-w;
        w=0;
    }
    else{
        s+=y;
        w=w-y;
        y=0;
    }
    s+=y;
    if(x>=2){
        s+=(x/2);
        x=x%2;
    }
    if(x==0){
        if(w>=1&&w%4==0) s+=w/4;
        else if(w>=1&&w%4!=0) s+=(w/4)+1;
    }
    else{
        if(w<=2){
            s++;
        }
        else{
            s++;
            w=w-2;
            if(w>=1&&w%4==0) s+=w/4;
            else if(w>=1&&w%4!=0) s+=(w/4)+1;
        }

    }
    cout<<s<<endl;
    return 0;


}
