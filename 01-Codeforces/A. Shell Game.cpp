#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,ar[10];
    for(int i=0;i<10;i++){
        ar[i]=i;
    }
    cin>>n;
    for(int i=1;i<=3;i++){
        int a,b;
        cin>>a>>b;
        int temp=ar[a];
        ar[a]=ar[b];
        ar[b]=temp;
        //cout<<ar[1]<<ar[2]<<ar[3]<<endl;
    }
    if(n==ar[1]) cout<<1<<endl;
    else if(n==ar[2]) cout<<2<<endl;
    else cout<<3<<endl;
    return 0;
}
