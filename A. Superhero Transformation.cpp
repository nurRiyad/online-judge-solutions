#include<bits/stdc++.h>
using namespace std;

int CharTest(char a){
    if(a=='a') return 1;
    else if(a=='e') return 1;
    else if(a=='i') return 1;
    else if(a=='o') return 1;
    else if(a=='u') return 1;
    else 0;
}

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()) cout<<"No"<<endl;
    else{
        int flag=1;
        for(int i=0;i<s.size();i++){
            int x=CharTest(s[i]);
            int y=CharTest(t[i]);
            if(x!=y){
                cout<<"No"<<endl;
                flag=0;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
    }
    return 0;
}
