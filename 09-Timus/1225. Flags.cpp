#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[100][10];

ll n;
ll dp(ll index,ll  color){
    if(ar[index][color]!=-1) return ar[index][color];
    else if(index==n){
        if(color==0) return 2;
        else return 1;
    }
    else{
        if(color==0){
            ar[index][color]=2*dp(index+1,1);
            return ar[index][color];
        }
        else if(color==1){
              ar[index][color]= dp(index+1,2)+dp(index+1,1);
              return ar[index][color];
        }
        else{
            ar[index][color]=dp(index+1,1);
            return ar[index][color];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    memset(ar,-1,sizeof(ar));
    cin>>n;
    cout<<dp(1,0)<<endl;
    return 0;
}
