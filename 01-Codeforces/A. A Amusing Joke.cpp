#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int sl[30],tl[30];
    for(int i=0;i<26;i++){
        sl[i]=0;
        tl[i]=0;
    }
    cin>>a>>b>>c;
    if(a.length()+b.length()!=c.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<a.length();i++){
        sl[a[i]-65]++;
    }
    for(int i=0;i<b.length();i++){
        sl[b[i]-65]++;
    }
    for(int i=0;i<c.length();i++){
        tl[c[i]-65]++;
    }
    for(int i=0;i<26;i++){
        if(sl[i]!=tl[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
