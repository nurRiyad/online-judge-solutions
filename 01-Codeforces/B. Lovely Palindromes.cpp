#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin>>s;
    string a=s;
    reverse(a.begin(),a.end());
    cout<<s+a<<endl;
    return 0;
}
