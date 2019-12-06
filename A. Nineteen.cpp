#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a;
    cin>>a;
    int ar[27];
    memset(ar,0,sizeof(ar));
    for(int i=0;i<a.size();i++){
        int x=a[i];
        ar[x-'a']++;
    }
    int m=(ar['n'-'a']-1)/2;
    int n=ar['i'-'a'];
    int o=ar['e'-'a']/3;
    int p=ar['t'-'a'];
    int x=min(min(min(m,n),o),p);
    cout<<x<<endl;
    return 0;
}
