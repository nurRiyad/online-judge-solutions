#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m==0&&n==0){
        cout<<0<<endl;
        return 0;
    }
    else if(m==0&&n>0){
        if(n==1) cout<<0<<endl;
        else cout<<(4*(n-1))+1<<endl;
        return 0;
    }
    else if(n>0&&m>0){
            int x=max(n,m);
        cout<<((x-1)*4)+1<<endl;
        return 0;
    }
    else if(n==0&&m>0){
        cout<<((m-1)*4)+2<<endl;
        return 0;
    }
    else  if(n<0&&m>0){
        int x=max(abs(n),m);
        cout<<((x-1)*4)+2<<endl;
        return 0;
    }
    else if(n<0&&m==0){
        cout<<((abs(n)-1)*4)+3<<endl;
        return 0;
    }
    else if(n<0&&m<0){
        int x=max(abs(n),abs(m));
        cout<<((x-1)*4)+4<<endl;
        return 0;
    }
    else if(n==0&&m<0){
        cout<<((abs(m)-1)*4)+4<<endl;
        return 0;
    }
    else if(n>0&&m<0){
        int x=max(n,abs(m));
        cout<<((x-1)*4)+4<<endl;
        return 0;
    }
    return 0;

}
