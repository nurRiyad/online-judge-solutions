#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,r=1;
    cin>>a;
    vector<string> b;
    b.push_back("Sheldon");
    b.push_back("Leonard");
    b.push_back("Penny");
    b.push_back("Rajesh");
    b.push_back("Howard");
    while(r*5<a){
        a-=r*5;
        r*=2;
    }
    cout<<b[(a-1)/r]<<endl;
    return 0;
}
