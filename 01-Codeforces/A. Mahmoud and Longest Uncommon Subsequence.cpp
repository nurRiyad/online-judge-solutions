#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a,b;
    cin>>a>>b;
    if(a==b) cout<<-1<<endl;
    else cout<<max(a.size(),b.size())<<endl;
    return 0;
}

