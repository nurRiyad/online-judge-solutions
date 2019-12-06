#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,ar[105],p,q;
    memset(ar,0,sizeof(ar));
    cin>>n>>p>>q;
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int i=a;i<b;i++){
            ar[i]=1;
        }
    }
    int sum=0;
    for(int i=p;i<=q;i++){
        if(!ar[i]) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
