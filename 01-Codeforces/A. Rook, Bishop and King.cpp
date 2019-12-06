#include<bits/stdc++.h>
using namespace std;
int ar[9][9];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2||c1==c2){
        cout<<1<<" ";
    }
    else{
        cout<<2<<" ";
    }
    for(int i=1;i<=8;i++){
        int fg=0;
        for(int j=1;j<=8;j++){
            if(i%2==1){
                if(j%2==1) ar[i][j]=1;
            }
            else{
                if(j%2==0) ar[i][j]=1;
            }
        }
    }
    if(ar[r1][c1]==ar[r2][c2]){
        int x=r1,y=c1,fg=1;
        while(x<=8||y<=8){
            x++;
            y++;
            if(x==r2&&y==c2){
                cout<<1<<" ";
                fg=0;
                break;
            }
        }
        x=r1;
        y=c1;
        while(x>=1||y>=1){
            x--;
            y--;
            if(x==r2&&y==c2){
                cout<<1<<" ";
                fg=0;
                break;

            }
        }
        x=r1;
        y=c1;
        while(x>=1||y<=8){
            x--;
            y++;
            if(x==r2&&y==c2){
                cout<<1<<" ";
                fg=0;
                break;
            }
        }
        x=r1;
        y=c1;
        while(x<=8||y>=1){
            x++;
            y--;
        //cout<<x<<" "<<y<<endl;
            if(x==r2&&y==c2){
                cout<<1<<" ";
                fg=0;
                break;
            }
        }
        if(fg) cout<<2<<" ";
    }
    else{
        cout<<0<<" ";
    }
    if(r1==r2&&c1!=c2){
        cout<<abs(c1-c2)<<endl;
    }
    else if(r1!=r2&&c2==c1){
        cout<<abs(r1-r2)<<endl;
    }
    else{
       // cout<<c2-c1<<" "<<r2-r1<<endl;
        cout<<max(abs(c2-c1),abs(r2-r1))<<endl;
    }

    return 0;
}
