#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a,b,mx,mn;
    cin>>a>>b;
    if(b>=a){
        mn=0;
    }
    else{
        mn=a-(b*2);
        if(mn<0) mn=0;
    }
    {
        mx=a-(b+1);
        if(mx<0) mx=0;
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
