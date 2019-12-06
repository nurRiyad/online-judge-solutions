#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int flag=1;
    for(int i=0;i<a.size()-1;i++){
        int x=a[i]-'0';
        int y=a[a.size()-1]-'0';
        if((x%2==0)&&(y>x)){
            swap(a[i],a[a.size()-1]);
            flag=0;
            break;
        }
    }
    if(flag){
        for(int i=a.size()-2;i>=0;i--){
            int x=a[i]-'0';
            if(x%2==0){
                swap(a[i],a[a.size()-1]);
                flag=0;
                break;
            }
        }
    }
    if(flag) cout<<-1<<endl;
    else cout<<a<<endl;
    return 0;
}
