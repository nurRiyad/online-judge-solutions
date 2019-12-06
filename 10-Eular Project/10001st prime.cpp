#include<bits/stdc++.h>
using namespace std;
#define mx 1000009
int ar[mx];

void seieve(){
    ar[0]=1;
    ar[1]=1;
    for(int i=2;i<=sqrt(mx);i++){
        for(int j=i*i;j<=mx;j+=i){
            ar[j]=1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    seieve();
    vector<int> v;
    for(int i=0;i<=mx;i++){
        if(ar[i]==0) v.push_back(i);
    }
    cout<<v[10000]<<endl;
    return 0;
}
