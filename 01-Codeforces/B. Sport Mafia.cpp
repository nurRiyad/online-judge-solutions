#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int moves,candy;
    cin>>moves>>candy;
    if(moves==1&&candy==1){
        cout<<0<<endl;
        return 0;
    }
    moves--;
    int prevadd=1,totall=1,eat=0;
    while(moves>0){
        if(totall==0){
            totall=totall+prevadd+1;
            prevadd=prevadd+1;
            moves--;
        }
        else if(totall+prevadd+1>candy){
            moves--;
            totall--;
            eat++;
        }
        else{
            totall=totall+prevadd+1;
            prevadd+=1;
            moves--;
        }
        //cout<<totall<<endl;
    }
    cout<<eat<<endl;
    return 0;
}
