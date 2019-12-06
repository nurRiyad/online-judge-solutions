#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np,mn=INT_MAX;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinkno=(k*l)/(nl);
    int saltno=p/(np);
    int limeno=c*d;
    mn=min(mn,drinkno);
    mn=min(mn,limeno);
    mn=min(saltno,mn);
    mn=mn/n;
    cout<<mn<<endl;
}
