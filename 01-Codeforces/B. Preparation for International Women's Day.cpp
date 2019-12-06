#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,k,sum=0,m;
    cin>>n>>k;
    int ar[k+2];
    memset(ar,0,sizeof(ar));
    for(int i=0;i<n;i++){
        cin>>m;
        ar[m%k]++;
    }
    sum+=(ar[0]/2);
    //for(int i=0;i<=k;i++) cout<<ar[i]<<" ";
    //cout<<endl;
    for(int i=1;i<=k/2;i++){
        if(i==(k-i)){
            sum+=ar[i]/2;
        }
        else{
            sum+=min(ar[i],ar[k-i]);
        }
    }
    cout<<sum*2<<endl;
    return 0;
}
