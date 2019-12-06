#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,sum=0;
    cin>>n;
    for(int i=1,j=1;i<=n;i++,j+=2){
        sum+=j;
    }
    for(int i=1,j=1;i<n;i++,j+=2){
        sum+=j;
    }
    cout<<sum<<endl;
    return 0;
}
