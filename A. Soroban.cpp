#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int x=a.size();
    string s[x];
    for(int i=x-1;i>=0;i--){
        string c;
        int y=a[i]-'0';
        if(y>=5){
            c.push_back('-');
            c.push_back('O');
            c.push_back('|');
            int z=y-5;
            for(int k=0;k<z;k++) c.push_back('O');
            c.push_back('-');
            for(int k=0;k<(4-z);k++) c.push_back('O');
        }
        else{
            c.push_back('O');
            c.push_back('-');
            c.push_back('|');
            int z=y;
            for(int k=0;k<z;k++) c.push_back('O');
            c.push_back('-');
            for(int k=0;k<(4-z);k++) c.push_back('O');
        }
        cout<<c<<endl;
    }
    return 0;

}
