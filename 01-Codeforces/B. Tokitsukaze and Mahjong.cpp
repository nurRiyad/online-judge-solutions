#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<0<<endl;
        return 0;
    }
    char m=a[1];
    char n=b[1];
    char o=c[1];
    vector<int> v{a[0]-'0',b[0]-'0',c[0]-'0'};
    sort(v.begin(),v.end());
    int x=v[0];
    int y=v[1];
    int z=v[2];
    if((m==n)&&(n==o)&&(abs(x-y)==1)&&(abs(y-z)==1)){
        cout<<0<<endl;
        return 0;
    }
    if(a==b||b==c||c==a){
        cout<<1<<endl;
        return 0;
    }
    int p=a[0]-'0';
    int q=b[0]-'0';
    int r=c[0]-'0';
    if((m==n)&&(abs(p-q)==1||abs(p-q)==2)){
         cout<<1<<endl;
         return 0;
    }
    if((n==o)&&(abs(q-r)==1||abs(q-r)==2)){
        cout<<1<<endl;
        return 0;
    }
    if((m==o)&&(abs(p-r)==1||abs(p-r)==2)){
         cout<<1<<endl;
         return 0;
    }
    cout<<2<<endl;
    return 0;
}
