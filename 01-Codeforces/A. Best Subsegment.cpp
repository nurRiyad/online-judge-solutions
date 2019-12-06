#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=INT_MIN,mxseq=INT_MIN,p,q;
    cin>>n;
    vector<int> v(n),r;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>mx) mx=v[i];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==mx){
            int longseq=0;
            for(int j=i;j<v.size()-1;j++){
                if(v[j]==v[j+1]){
                     longseq++;
                     i++;
                }
                else break;
            }
            if(longseq>mxseq){
                mxseq=longseq;
            }
        }
    }
    cout<<++mxseq<<endl;
}
