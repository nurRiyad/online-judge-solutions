#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    while(cin>>n){
        ll a=1,b=9;
        bool c=true;
        while(!(n>=a&&n<=b)){
            if(c){
                a=b+1;
                b=b*2;
                c=false;
            }
            else{
                a=b+1;
                b=b*9;
                c=true;
            }
        }
        if(c) cout<<"Stan wins."<<endl;
        else cout<<"Ollie wins."<<endl;
    }
    return 0;
}
