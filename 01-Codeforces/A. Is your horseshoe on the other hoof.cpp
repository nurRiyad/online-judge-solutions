#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;;
    set<int> b;
    set<int>::iterator it;
    for(int i=0;i<4;i++){
        cin>>a;
        b.insert(a);
    }
    for(it=b.begin();it!=b.end();it++){
        sum++;
    }
    if(sum==1) cout<<3<<endl;
    else if(sum==2) cout<<2<<endl;
    else if(sum==3) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
