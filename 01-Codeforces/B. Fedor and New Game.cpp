#include<bits/stdc++.h>
using namespace std;

int cuntBit(int s,int a){
    int cunt=0;
    for(int i=0;i<32;i++){
        int x=(s >> i) & 1;
        int y=(a >> i) & 1;
        if(x!=y) cunt++;
    }
    //cout<<cunt<<endl;
    return cunt;
}

int main()
{
    int n,m,k,s;
    cin>>n>>m>>k;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    cin>>s;
    int sum=0;
    for(int i=0;i<v.size();i++){
        if(cuntBit(s,v[i])<=k) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
