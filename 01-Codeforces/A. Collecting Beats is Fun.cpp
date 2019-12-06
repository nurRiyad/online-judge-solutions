#include<bits/stdc++.h>
using namespace std;
int ar[17];

int main()
{
    int n,mx=INT_MIN;
    cin>>n;
    n=n*2;
    string s[4];
    for(int i=0;i<4;i++){
        cin>>s[i];
        for(int j=0;j<4;j++){
            if(s[i][j]!='.'){
                char ch=s[i][j];
                ar[ch-'0']++;
            }
        }
    }
    for(int i=0;i<17;i++){
        if(ar[i]>mx) mx=ar[i];
    }
    //cout<<mx<<endl;
    if(n>=mx) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
