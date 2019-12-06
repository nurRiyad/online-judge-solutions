#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;;i++){
        int flag=1;
        for(int j=0;j<a.size()-1;j++){
            if(a[j]==a[j+1]){
                a.erase(j,2);
                sum++;
                flag=0;
                break;
            }
        }
        if(flag||a.size()==0) break;
    }
    if(sum%2==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
