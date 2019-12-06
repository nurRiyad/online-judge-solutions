#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]!='['){
            a.erase(i,1);
            if(a.size()==0){
                cout<<-1<<endl;
                return 0;
            }
            i--;
        }
        else{
            break;
        }
    }
    //cout<<a<<endl;
    for(int i=1;i<a.size();i++){
        if(a[i]!=':'){
            a.erase(i,1);
            if(a.size()==0){
                cout<<-1<<endl;
                return 0;
            }
            i--;
        }
        else{
            break;
        }
    }
    //cout<<a<<endl;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]!=']'){
            a.erase(i,1);
            if(a.size()==0){
                cout<<-1<<endl;
                return 0;
            }
        }
        else{
            break;
        }
    }
    //cout<<a<<endl;
    for(int i=a.size()-2;i>=0;i--){
        if(a[i]!=':'){
            a.erase(i,1);
            if(a.size()==0){
                cout<<-1<<endl;
                return 0;
            }
        }
        else{
            break;
        }
    }
    for(int i=2;i<a.size()-2;i++){
        if(a[i]!='|'){
            a.erase(i,1);
            if(a.size()==0){
                cout<<-1<<endl;
                return 0;
            }
            i--;
        }
    }
    if(a.size()>3){
        if(a[0]=='['&&a[1]==':'&&a[a.size()-2]==':'&&a[a.size()-1]==']'){
            cout<<a.size()<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;

}
