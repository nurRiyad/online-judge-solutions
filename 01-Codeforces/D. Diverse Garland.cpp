#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    string a;
    cin>>a;
    if(a.size()>=3){
        for(int i=0;i<a.size()-2;i++){
            if(a[i]==a[i+1]&&a[i+1]==a[i+2]){
                if(a[i]=='R') a[i+1]='G';
                else if(a[i]=='G') a[i+1]='R';
                else if(a[i]=='B') a[i+1]='G';
                sum++;
            }
        }
    }
    if(a.size()>=2){
        if(a[0]==a[1]){
            if(a[0]=='R') a[0]='G';
            else if(a[0]=='G') a[0]='R';
            else if(a[0]=='B') a[0]='G';
            sum++;
        }
        else{
            for(int i=1;i<a.size()-1;i++){
                if(a[i]==a[i+1]){
                    if(a[i-1]!='R'&&a[i+1]!='R') a[i]='R';
                    if(a[i-1]!='B'&&a[i+1]!='B') a[i]='B';
                    if(a[i-1]!='G'&&a[i+1]!='G') a[i]='G';
                    sum++;
                }
            }
        }
    }
    for(int i=1;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            if(a[i-1]!='R'&&a[i+1]!='R') a[i]='R';
            if(a[i-1]!='B'&&a[i+1]!='B') a[i]='B';
            if(a[i-1]!='G'&&a[i+1]!='G') a[i]='G';
            sum++;
        }
    }
    cout<<sum<<endl;
    cout<<a<<endl;
    return 0;
}
