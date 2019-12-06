/*
ID: alasadn1
TASK: beads
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");

    int n,mx=0;
    //fin>>n;
    cin>>n;
    string s;
    //fin>>s;
    cin>>s;
    s=s+s;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int sum=0,x=i,y=i+1;
        if(ch=='w'){
            int a=0,b=0,m=x;
            while(x>=0){
                if(ch=='b'||s[x]=='w'){
                    a++;
                    x--;
                }
                else break;
            }
            while(m>=0){
                if(ch=='r'||s[m]=='w'){
                    b++;
                    m--;
                }
                else break;
            }
            sum=max(a,b);
        }
        else{
            while(x>=0){
                if(ch==s[x]||s[x]=='w'){
                    sum++;
                    x--;
                }
                else break;
            }
        }
        ch=s[i+1];
        if(ch=='w'){
            int a=0,b=0,m=y;
            while(y<s.size()){
                if(ch=='b'||s[y]=='w'){
                    a++;
                    y++;
                }
                else break;
            }
            while(m<s.size()){
                if(ch=='r'||s[m]=='w'){
                    b++;
                    y++;
                }
                else break;
            }
            sum=sum+max(a,b);
        }
        else{
            while(y<s.size()){
                if(ch==s[y]||s[y]=='w'){
                    sum++;
                    y++;
                }
                else break;
            }
        }
        if(sum>s.size()/2) sum=s.size()/2;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    //fout<<mx<<endl;
    return 0;
}
