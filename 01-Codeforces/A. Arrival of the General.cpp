#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,mx=0,sum1,sum2;
    cin>>a;
    vector<int> b;
    for(int i=0;i<a;i++){
        cin>>c;
        if(c>mx){
            mx=c;
            sum1=i;
        }
        b.push_back(c);
    }
   //cout<<sum1<<endl;
    int x=sum1;
    for(int i=sum1;i>=0;i--){
        b[i]=b[i-1];
    }
    b[0]=mx;
    int mi=mx;
    for(int i=0;i<a;i++){
        if(b[i]<=mi){
            mi=b[i];
            sum2=i+1;
        }
    }
    //cout<<sum2<<endl;
    cout<<sum1+(a-sum2)<<endl;
    return 0;

}
