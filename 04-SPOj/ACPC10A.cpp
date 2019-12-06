#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll a,b,c;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&&c==0) return 0;
        if(b-a==c-b){
            cout<<"AP"<<" "<<c+(c-b)<<endl;
        }
        else{
            cout<<"GP"<<" "<<c*(c/b)<<endl;
        }

    }
    return 0;
}
