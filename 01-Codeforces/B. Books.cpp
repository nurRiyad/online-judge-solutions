#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int j=0,sum=0,mx=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        while(sum>k){
            sum-=v[j++];
        }
        mx=max(mx,(i-j+1));
    }
    cout<<mx<<endl;
    return 0;
}
