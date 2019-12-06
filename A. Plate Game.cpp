#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a,b,r;
    cin>>a>>b>>r;
    if(2*r<=min(a,b)){
        cout<<"First"<<endl;
    }
    else {
        cout<<"Second"<<endl;
    }
    return 0;
}
