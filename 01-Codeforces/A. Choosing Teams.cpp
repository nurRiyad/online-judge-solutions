#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    vector<int> c,d;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        c.push_back(x+b);
    }
    for(int i=0;i<a;i++){
        if(c[i]<=5){
            d.push_back(c[i]);
        }
    }
    cout<<d.size()/3<<endl;
    return 0;


}
