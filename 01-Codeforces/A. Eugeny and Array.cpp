#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cun1=0,cun2=0;
    scanf("%d%d",&n,&m);
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a==1) cun1++;
        else cun2++;
    }
    for(int i=0;i<m;i++){
        int l,r;
        scanf("%d%d",&l,&r);
        int x=(r-l)+1;
        if(x%2==1) v.push_back(0);
        else{
            if(cun1>=(x/2)&&cun2>=(x/2)) v.push_back(1);
            else v.push_back(0);
        }
    }
    for(int i=0;i<v.size();i++){
        printf("%d\n",v[i]);
    }
    return 0;
}
