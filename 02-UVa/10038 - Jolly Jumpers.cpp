#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
        int a[t],b[t];
        for(int i=1;i<t;i++){
            b[i]=0;
        }
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t-1;i++){
            b[abs(a[i]-a[i+1])]++;
        }
        int fg=1;
        for(int i=1;i<t;i++){
            if(!b[i]){
                cout<<"Not jolly"<<endl;
                fg=0;
                break;
            }
        }
        if(fg) cout<<"Jolly"<<endl;
    }
    return 0;

}
