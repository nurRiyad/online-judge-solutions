#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int a=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    int b=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    int c=(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    if(a==(b+c)||b==(a+c)||c==(a+b)){
        if(a!=0&&b!=0&&c!=0){
            cout<<"RIGHT"<<endl;
            return 0;
        }

    }
    int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
    for(int i=0;i<4;i++){
        x1=dx[i]+x1;
        y1=dy[i]+y1;
        int a=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        int b=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        int c=(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
        if(a==(b+c)||b==(a+c)||c==(a+b)){
            if(a!=0&&b!=0&&c!=0){
                cout<<"ALMOST"<<endl;
                return 0;
            }
        }
        x1-=dx[i];
        y1-=dy[i];
    }
    for(int i=0;i<4;i++){
        x2=dx[i]+x2;
        y2=dy[i]+y2;
        int a=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        int b=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        int c=(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
        if(a==(b+c)||b==(a+c)||c==(a+b)){
            if(a!=0&&b!=0&&c!=0){
                cout<<"ALMOST"<<endl;
                return 0;
            }
        }
        x2-=dx[i];
        y2-=dy[i];

    }
    for(int i=0;i<4;i++){
        x3=dx[i]+x3;
        y3=dy[i]+y3;
        int a=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        int b=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        int c=(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
        if(a==(b+c)||b==(a+c)||c==(a+b)){
          if(a!=0&&b!=0&&c!=0){
                cout<<"ALMOST"<<endl;
                return 0;
            }
        }
        x3-=dx[i];
        y3-=dy[i];

    }
    cout<<"NEITHER"<<endl;
    return 0;
}
