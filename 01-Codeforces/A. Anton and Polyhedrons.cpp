#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    cin>>n;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron") cnt+=4;
        if(s=="Cube") cnt+=6;
        if(s=="Octahedron") cnt+=8;
        if(s=="Dodecahedron") cnt+=12;
        if(s=="Icosahedron") cnt+=20;
    }
    cout<<cnt<<endl;
    return 0;
}
