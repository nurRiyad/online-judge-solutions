#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,fa,fb,fc;
    cin>>a>>b;
    stringstream sc,sd,se,sf,sg,sh;
    int x,y,z;
    for(int i=0;i<a.size();i++){
        if(a[i]!='0') fa.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++){
        if(b[i]!='0') fb.push_back(b[i]);
    }
    sc<<a;
    sc>>x;
    sd<<b;
    sd>>y;
    z=x+y;
    sg<<z;
    sg>>c;
    for(int i=0;i<c.size();i++){
        if(c[i]!='0') fc.push_back(c[i]);
    }
    sh<<fc;
    sh>>z;
    se<<fa;
    se>>x;
    sf<<fb;
    sf>>y;
    //cout<<x<<endl<<y<<endl;
    if(z==(x+y)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}
