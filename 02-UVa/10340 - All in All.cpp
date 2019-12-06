#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b){
        if(a.length()>b.length()){
            cout<<"No"<<endl;
        }
        else{
           int j=0;
            for(int i=0;i<b.length();i++){
                if(a[j]==b[i]){
                    j++;
                }
            }
            if(j==a.length()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}
