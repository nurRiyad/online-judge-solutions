#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a;
    vector<double> b;
    while(cin>>a){
        b.push_back(a);
    }
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        cout<<setprecision(4)<<fixed<<sqrt(b[i])<<endl;
    }
    return 0;
}
