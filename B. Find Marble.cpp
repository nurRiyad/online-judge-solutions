#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,s,e;
    cin>>n>>s>>e;
    int ar[n+1];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    if(s==e){
        cout<<0<<endl;
        return 0;
    }
    int sum=0,p=s;
    while(n--){
        p=ar[p];
        sum++;
        if(p==e){
            cout<<sum<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
